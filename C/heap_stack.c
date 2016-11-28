#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

#define MAX_ROWS 100
#define MAX_DATA 512

struct Address {
  int id;
  int set;
  char email[MAX_DATA];
  char name[MAX_DATA];
};

struct Database {
  struct Address rows[MAX_ROWS];
};

struct Connection {
  FILE *file;
  struct Database *db;
};

void die(const char *msg){
  if(errno){
    perror(msg);
  } else {
    printf("%s\n");
  }
  exit(1);
}

void Address_print(struct Address *addr){
  printf("%d. %s %s", addr->id, addr->name, addr->email);
}

void Database_load(struct Connection *conn){
  int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
  if(rc != 1) die("Unable to open file.");
}

struct Connection *Database_open(char *filename, char mode){
  struct Connection *conn;
  if(mode == 'c'){
    conn->file = fopen(filename, "w");
  } else {
    conn->file = fopen(filename, "r+");
    if(conn->file){
      Database_load(conn);
    }
  }
  if(!conn->file) die("Unable to create file.");
  return conn;
}

void Database_create(struct Connection *conn){
  int i;
  for(i=0; i<MAX_ROWS; i++){
    struct Address *addr = {.id=i, .set=0};
    conn->db->rows[i] = addr;
  }
}

void Database_write(struct Connection *conn){
  rewind(conn->file);
  int rc = fwrite(conn->db, sizeof(struct Database), 1, conn->file);
  if(rc != 1) die("UNable to write to database.");

  rc = fflush(conn->file);
  if(rc == -1) die("Unable to flush database");
}

void Database_get(struct Connection *conn, int id){
  struct Address *addr = &conn->db->rows[id];
  if(addr->set){
    Address_print(addr);
  } else {
    printf("Account is not exist.\n");
  }
}

void Database_set(struct Connection *conn, int id, char *name, char *email){
  struct Address *addr = &conn->db->rows[id];
  if(addr->set) die("Account is used.");

  addr->set = 1;
  char *res = strncpy(conn->name, name, MAX_DATA);
  if(!res) die("unable to write name.");

  res = strncpy(conn->email, email, MAX_DATA);
  if(!res) die("unable to write email.");
}

void Database_delete(struct Connection *conn, int id){
  if(conn->db->rows[id]->set){
    struct Address addr = {.id=id, .set=0};
    conn->db->rows[id] = addr;
  } else {
    printf("This ID is empty.");
  }
}

void Database_list(struct Connection *conn){
  int i;
  for(i=0; i<MAX_ROWS; i++){
    struct Address *addr = &conn->db->rows[i];
    if(addr->set){
      Address_print(addr);
    }
  }
}

void Database_close(struct Connection *conn){
  if(conn){
    if(conn->file) fclose(conn->file);
    if(conn->db) free(conn->db);
    free(conn);
  }
}

int main(int argc, char *argv[]){
  if(argc<3) die("USAGE: <dbfile> <action> [action params]");

  char *filename = argv[1];
  char action = argv[2][0];
  struct Connection *conn = Database_open(filename, action);
  int id;

  if(argc>3) id = atoi(argv[3]);
  if(id>=MAX_ROWS) die("Please insert appropriate id.");

  switch(action){
    case 'c':
      Database_create(conn);
      Database_write(conn);
      break;

    case 'g':
      if(argc!=4) die("Please insert an id to get.");
      Database_get(conn, id);
      break;

    case 's':
      if(argc!=6) die("Please insert an id, name and email to create an account.");
      Database_set(conn, id, argv[4], argv[5]);
      Database_write(conn);
      brea;

    case 'd':
      if(argc!=4) die("Please insert an id to delete.");
      Database_delete(conn, id);
      Database_write(conn);
      break;

    case 'l':
      Database_list(conn);
      break;

    default:
      die("Please insert an action.");
  }
  Database_close(conn);

  return 0;
}
