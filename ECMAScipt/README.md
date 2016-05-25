# My Personal ECMAScript Learning Library

## Documentation of Meteor's `ecmascript` package.

Support Link 1 [Here](https://docs.meteor.com/packages/ecmascript.html) Support Link 2 [Here](http://info.meteor.com/blog/es2015-get-started)

### es6.properties.shorthand (Object Short Notation):

`{ x: x, y: y, z: "asdf" }` is equivalent to `{ x, y, z: "asdf" }`

Another way:

```javascript
var obj = {
  oldWay: function(a, b){ ... },
  newWay(a, b){...}
};
```

### es6.constants

Allows defining block-scoped variables that are not allowed to be redefined.

### es6.classes:

```javascript
class Base {
  constructor(a, b) {
    this.value = a * b;
  }
}

class Derived extends Base {
  constructor(a, b) {
    super(a + 1, b + 1);
  }
}

var d = new Derived(2, 3);
d.value; // 12
```

### es6.blockScoping:

```javascript
function example(condition) {
let x = 0;
if (condition) {
  let x = 1;
  console.log(x);
} else {
  console.log(x);
  x = 2;
}
return x;
}

example(true); // logs 1, returns 0
example(false); // logs 0, returns 2
```

### es6.properties.computed:

```javascript
var counter = 0;
function getKeyName(){
    return "key" + counter++;
}

var test = {
  [getKeyName()]: "zero",
  [getKeyName()]: "one"
}

console.log(test.key0);   // zero
console.log(test.key1);   // one
```

### es6.parameters

Default expressions for function parameters, evaluated whenever the parameter is undefined, ...rest parameters for capturing remaining arguments without using the arguments object:

```javascript
function add(a = 0, ...rest) {
rest.forEach(n => a += n);  // similar as LINQ
  return a;
}

add(); // 0
add(1, 2, 3); // 6
```

### es6.spread

Allows an array of arguments to be interpolated into a list of arguments to a function call, new expression, or array literal.

```javascript
add(1, ...[2, 3, 4], 5); // 15
new Node("name", ...children);
[1, ...[2, 3, 4], 5]; // [1, 2, 3, 4, 5]
```

### es6.forOf

Provides an easy way to iterate over the elements of a collection:

```javascript
let sum = 0;
for (var x of [1, 2, 3]) {
sum += x;
}
x; // 6
```

### es6.destructuring

```javascript
let { username: name } = user;
// is equivalent to
let name = user.username;
```

Instead of taking a single opaque options parameter, a function can use an object destructuring pattern to name the expected options:

```javascript
function run({ command, args, callback }) { callback(); }

  run({
    command: "git",
    args: ["status", "."],
    callback(error, status) { console.log("Hello, World!"); },
    unused: "whatever"
  });
```

```javascript
// Destructuring + defaults arguments
function r({x, y, w = 10, h = 10}) {
  return x + y + w + h;
}
r({x:1, y:2}) === 23
```

### es7.objectRestSpread

Supports catch-all ...rest properties in object literal declarations and assignments:

```javascript
let { x, y, ...rest } = { x: 1, y: 2, a: 3, b: 4 };
x; // 1
y; // 2
rest; // { a: 3, b: 4 }

let n = { x, y, ...rest };
n; // { x: 1, y: 2, a: 3, b: 4 }
```

### Use object shorthand notation to return multiple values from functions

```javascript
function getPerson() {
  const firstName = "Joe";
  const lastName = "Bloggs";
  const age = 32;
  return {firstName, lastName, age}; // <-- new return value
}
const {firstName, lastName} = getPerson(); // old code still works
console.log(firstName, lastName); // Joe Bloggs
const {age} = getPerson(); // new code can access `age` too.
```
