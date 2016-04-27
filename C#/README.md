# C\# Learning Library
C\# is part of .Net Framework and is use to write .Net Applications.

### About .Net Framework
.Net is use to create **_Windows Application_**, **_Web Application_**, and **_Web Services_**. _The .Net framework applications are multi-platform applications. The framework has been designed in such a way that it can be used from any of the following languages: C#, C++, Visual Basic, Jscript, COBOL, etc. All these languages can access the framework as well as communicate with each other._ The components of .Net Framework can be found [here](http://www.tutorialspoint.com/csharp/csharp_environment_setup.htm).

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