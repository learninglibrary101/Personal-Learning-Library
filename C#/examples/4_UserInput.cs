using System;
namespace UserInputApp {
    class UserInput {
        static void Main(String[] argv) {
            int value;

            value = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(value);
            Console.ReadKey();
        }
    }
}