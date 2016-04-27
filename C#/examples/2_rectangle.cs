using System;
namespace RectangleApp
{
	class Rectangle {
		double width, length;
		
		public void getDimension(){
			width = 3.5;
			length = 4.5;
		}
		
		public double getArea(){
			return width * length;
		}
		
		public void getResult(){
			Console.WriteLine("Width: {0}", width);
			Console.WriteLine("Length: {0}", Length);
			Console.WriteLine("Area: {0}", getArea());
		}
	}
	
	class RectangleInit {
		static void Main(string[] argv){
			Rectangle r = new Rectangle();
			r.getDimension();
			r.ggetResult();
			Console.ReadKey();
		}
	}
}