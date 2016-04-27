// This is an explicit type conversion

using System;
namespace TypeCastingApp {
    class TypeCast {
        static void Main(String[] argv) {
            int value;
            value = (int)1234.56;

            Console.WriteLine("Converted Value: {0}", value);
            Console.ReadKey();
        }

    }
}