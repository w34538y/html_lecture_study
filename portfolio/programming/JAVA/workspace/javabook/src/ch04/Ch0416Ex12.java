package ch04;

abstract class Shape12 {
	public double res = 0;
	public abstract double area(); //abstract = 추상
	public void printArea(){
		System.out.println("면적은 "+res+" 이다.");
	}
}

class Circle12 extends Shape12 {
	public int r = 5;
	@Override // 아래의 메소드에 대한 정보를 컴파일러에 알려주는것 (없어도됨)
	public double area(){
		res = r*r*Math.PI;
		return res;
	}
}

class Rectangle12 extends Shape12{
	public int w = 10;
	public int h = 10;
	@Override
	public double area(){
		res = w *h;
		return res;
	}
}

class Triangle12 extends Shape12{
	public int w = 10;
	public int h = 10;
	@Override
	public double area(){
		res = w *h*0.5;
		return res;
	}
}
public class Ch0416Ex12 {
	public static void main(String[] args){
		Shape12 ref = null;
		ref = new Circle12();
		ref.area();
		ref.printArea();
		ref = new Rectangle12();
		ref.area();
		ref.printArea();
		ref = new Triangle12();
		ref.area();
		ref.printArea();
		
	}

}
