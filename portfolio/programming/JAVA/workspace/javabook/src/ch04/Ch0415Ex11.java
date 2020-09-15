package ch04;

class Shape{
	public double res = 0;
	
	public double area(){
		return res;
	}
	
}

class Circle extends Shape {
	public int r =5;
	public double area() {
		res = r * r * Math.PI;
		return res;
	}
}

class Rectangle extends Shape{
	public int w = 10;
	public int h = 10;
	
	public double area(){
		res = w * h;
		return res;
	}
	
}

class Triangle extends Shape{
	public int w = 10;
	public int h = 10;
	
	public double area(){
		res = w * h * 0.5;
		return res;
	}
	
}

public class Ch0415Ex11 {
//	public static void main(String[] args){
//		
//		Shape ref = null;
//		ref = new Circle();
//		prtArea(ref);
//		prtArea(new Circle());
//		System.out.println("도형의 면적은 "+ ref.area());
//		prtArea(new Rectangle());
//		prtArea(ref);
//		System.out.println("도형의 면적은 "+ ref.area());
//		prtArea(new Triangle());
//		prtArea(ref);
//		System.out.println("도형의 면적은 "+ ref.area());
//	}
	
	public static void prtArea(Shape sp){
		System.out.println("도형의 면적은 "+ sp.area());
	}
	
	public static void main(String[] args){
		Circle cc = new Circle ();
		System.out.println("도형의 면적은 "+ cc.area());
		Rectangle rt = new Rectangle ();
		System.out.println("도형의 면적은 "+ rt.area());
		Triangle tr = new Triangle ();
		System.out.println("도형의 면적은 "+ tr.area());
	}

}
