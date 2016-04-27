using System;
namespace IntToStringApp
{
    class IntToString
    {

        static void Main(String[] argv) {
            int value1 = 1234;
            float value2 = 1234.56f;
            double value3 = 1234.567;
            bool b = true;

            Console.WriteLine(value1.ToString());
            Console.WriteLine(value2.ToString());
            Console.WriteLine(value3.ToString());
            Console.WriteLine(b.ToString());
            Console.ReadKey();
        }
    }
}