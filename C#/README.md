sta# C\# Learning Library
C\# is part of .Net Framework and is use to write .Net Applications. **_This is not the full study reference for C\# Programming Language. It is a personal study key-points for myself._**


### About .Net Framework
.Net is use to create **_Windows Application_**, **_Web Application_**, and **_Web Services_**. _The .Net framework applications are multi-platform applications. The framework has been designed in such a way that it can be used from any of the following languages: C#, C++, Visual Basic, Jscript, COBOL, etc. All these languages can access the framework as well as communicate with each other._ The components of .Net Framework can be found [here](http://www.tutorialspoint.com/csharp/csharp_environment_setup.htm).


### Data Types in C\#
#### Reference Type
##### Object Type
The ultimate base class for all data types in C# Common Type System (CTS). The object types can be assigned values of any other types, **value types**, **reference types**, **predefined** or **user-defined** types.
```cs
object obj;
obj = 100; // this is boxing
```


##### Dynamic Type
Dynamic types are similar to object types except that **_type checking for object type variables takes place at compile time_**, whereas that for the **_dynamic type variables takes place at run time_**.
```cs
dynamic <variable_name> = value;
dynamic d = 20;	// example
```


##### String Type
Allows you to assign any string values to a variable.
```cs
String str = "Tutorials Point";
@"Tutorials Point";
```


### Type Conversion
Type conversion is converting one type of data to another type. It is also known as Type Casting. In C#, type casting has two forms:
**Implicit type conversion** - These conversions are performed by C# in a type-safe manner.
**Explicit type conversion** - These conversions are done explicitly by users using the pre-defined functions. Explicit conversions require a cast operator.


### Encapsulation
**Abstraction** allows making relevant information visible. **Encapsulation** enables a programmer to implement the desired level of abstraction.
An **access specifier** defines the scope and visibility of a class member.

`Public` - allows a class to expose its member variables and member functions to other functions and objects. Any public member can be accessed from outside the class.

`Private` - allows a class to hide its member variables and member functions from other functions and objects. Only functions of the same class can access its private members. Even an instance of a class cannot access its private members.

`Protected` - allows a child class to access the member variables and member functions of its base class.

`Internal` - allows a class to expose its member variables and member functions to other functions and objects in the current assembly.

`Protected internal` - allows a class to hide its member variables and member functions from other class objects and functions, except a child class within the same application.


### Methods
A method is a group of statements that together perform a task.


#### Defining Methods in C\#
```cs
<Access Specifier> <Return Type> <Method Name>(Parameter List)
{
   Method Body
}
```

## Nullables
The nullable type is a special data type, to which you can assign normal range of values as well as null values. For example, you can store any value from -2,147,483,648 to 2,147,483,647 or null in a Nullable<Int32> variable. Similarly, you can assign true, false, or null in a Nullable<bool> variable. Syntax for declaring a nullable type is as follows:
`< data_type> ? <variable_name> = null;`

### Null Coalescing Operator
Null Coalescing operator is used with the nullable value types and reference types. It is used for converting an operand to the type of another nullable (or not) value type operand, where an implicit conversion is possible. If the value of the first operand is null, then the operator returns the value of the second operand, otherwise it returns the value of the first operand.

## Array
An array is a collection of variables of the same type stored at contiguous memory locations. To declare an array in C#, you can use the following syntax:
```cs
datatype[] arrayName;
double[] balance = new double[10];   // initializing the array
balance[0] = 4500.0;                 // assigning value to an array

/* Other examples */
double[] balance = { 2340.0, 4523.69, 3421.0};
int [] marks = new int[5]  { 99,  98, 92, 97, 95};
int [] marks = new int[]  { 99,  98, 92, 97, 95};
int [] marks = new int[]  { 99,  98, 92, 97, 95};
int[] score = marks;                // can copy an array into another array
```

## Classes
Objects are instances of a class

### Class Constructor
A class constructor is a special member function of a class that is executed whenever we create new objects of that class.

### Parameterized Constructors
This technique helps you to assign initial value to an object at the time of its creation.

### Destructor
A destructor is a special member function of a class that is executed whenever an object of its class goes out of scope. A destructor has exactly the same name as that of the class with a prefixed tilde (~) and it can neither return a value nor can it take any parameters.

### Static Member in a class
If a member of a class as static, **it means no matter how many objects of the class are created, there is only one copy of the static member**.

### Static Function
**Such functions can access only static variables**. The static functions exist even before the object is created.

## Questions
### Difference between structure, object and array.
- **Struct** is a **structured piece of data**.
- **Object** is an instance of a class. Since classes can be used to represent classic data structures such as arrays, hash maps, trees, etc, you often see them as the individual things within a block of structured data.
- **Array** is a block of unstructured data.

> - Use an array as a place to put a large group of things with no other inherent structure or hierarchy, such as "all receipts from January" or "everything I bought in Denmark"

> - Use structured data to compound several discrete bits of data into a single block, such as you might want to combine an x position and a y position to describe a point

> - Use an object where there's a particular actor or thing that thinks or acts for itself

*_The implicit purpose of an object is therefore directly to associate tasks with the data on which they can operate and to bundle that all together so that no other part of the system can interfere. Obeying proper object-oriented design principles may require discipline at first but will ultimately massively improve your code structure and hence your ability to tackle larger projects and to work with others._

Reference: [Here](http://stackoverflow.com/questions/4514582/whats-the-difference-between-an-object-and-a-struct-in-oop)


### Difference between Object and Class
1)	**Object** is an instance of a class.	**Class** is a blueprint or template from which objects are created.

2)	**Object** is a real world entity such as pen, laptop, mobile, bed, keyboard, mouse, chair etc.	**Class** is a group of similar objects.

3)	**Object** is a physical entity.	**Class** is a logical entity.

4)	**Object** is created through new keyword mainly e.g.
`Student s1=new Student();`
**Class** is declared using **class** keyword e.g.
`class Student{}`

5)	**Object** is created many times as per requirement.	**Class** is declared once.

6)	**Object** allocates memory when it is created.	**Class** doesn't allocated memory when it is created.

7)	_There are many ways to create **object** in java such as new keyword, newInstance() method, clone() method, factory method and deserialization.	There is only one way to define class in java using class keyword._

Reference 1: [Here](https://isocpp.org/wiki/faq/classes-and-objects)

Reference 2: [Here](http://www.javatpoint.com/difference-between-object-and-class)
