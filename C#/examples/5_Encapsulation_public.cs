// Example for Encapsulation - Public

using System;
namespace EcapApp {
    class EncapSetting {
        public double rect_length, rect_width;

        public double getArea() { 
            return rect_length * rect_width;
        }

        public void getResult() {
            Console.WriteLine("Rectangular Length: {0}", rect_length);
            Console.WriteLine("Rectangular Width: {0}", rect_width);
        }
    }

    class EncapInit {
        static void Main(String[] argv) {
            EncapSetting rect = new EncapSetting();
            rect.rect_length = 11.11;
            rect.rect_width = 22.22;
            Console.WriteLine("The area of Rectangular: {0}", rect.getArea());
            rect.getResult();
            Console.ReadKey();
        }
    }
}