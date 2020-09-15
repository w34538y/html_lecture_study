package ch04;


abstract class Shape14{
	public double res = 0;
	public abstract double area();
	public void printArea(){
		System.out.println("면적은 "+res+"이다.");
	}
}

interface Drawable14{
	public abstract void draw();
}

class Rectangle14 extends Shape14 implements Drawable14{
	public int w = 10;
	public int h = 10;
	
	@Override
	public double area(){
		res = w * h;
		return res;
	}
	
	@Override
	public void draw(){
		System.out.println("사각형을 그리다.");
	}
}

public class Ch0418Ex14 {
	public static void main(String[] args){
		Rectangle14 ref = null;
		ref = new Rectangle14();
		ref.area();
		ref.printArea();
		ref.draw();
		
		Shape14 sh = new Rectangle14();
		sh.area();
		sh.printArea();
//		sh.draw();
		
		Drawable14 dr = new Rectangle14();
//		dr.area();
//		dr.printArea();
		dr.draw();
	}

}



