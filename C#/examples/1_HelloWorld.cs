using System;   // using keyword is used to include the System namespace in the program
namespace HelloWorldApp {       // a collection of classes, now it contains class HelloWorld
    // Class contains the data and method definitions that your program uses. Classes generally contain multiple methods
    // Methods define the behavior of the class
    // the HelloWorld class has only one method Main
    class HelloWorld
    {
        static void Main(String[] argv)
        {
            Console.WriteLine("Hello, World!"); // WriteLine is a method of the Console class defined in the System namespace
            Console.ReadKey();  // is for the VS.NET Users. This makes the program wait for a key press and it prevents the screen from running and closing quickly
        }
    }
}