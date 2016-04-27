// Example for Encapsulation - Private

using System;
namespace EncapPrivate {
    class EncapSetting {
        private double length, width;

        public void getDimensions() {
            Console.WriteLine("Please insert the length of rectangle.");
            length = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Please insert the width of rectangle.");
            width = Convert.ToDouble(Console.ReadLine());
        }

        public double getArea() {
            return length * width;
        }

        public void getResult() {
            Console.WriteLine("\nWidth: {0}", width);
            Console.WriteLine("Length: {0}", length);
            Console.WriteLine("The area of rectangle is {0}", getArea());
        }
    }

    class EncapInit {
        static void Main(String[] argv) {
            EncapSetting rect = new EncapSetting();
            rect.getDimensions();
            rect.getResult();
            Console.ReadKey();
        }
    }
}