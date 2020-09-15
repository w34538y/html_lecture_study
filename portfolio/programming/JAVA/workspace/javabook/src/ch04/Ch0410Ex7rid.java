package ch04;

class Point2D07{ // 07이 붙는 이유는 패키지내에서 하나의 이름을 가진 클래스만 사용가능
	protected int x = 10;
	protected int y = 20;
	
	public Point2D07(){
		System.out.println("Point2D07()");
	}
	
	public Point2D07(int x){
		this.x = x;
		System.out.println("Point2D07(int x)");
	}
	
	public void showPoint() {
		System.out.println( " x 좌표 : " + x);
		System.out.println( " y 좌표 : " + y);
	}
}//슈퍼 클래스

class Point3D07 extends Point2D07{
	protected int z = 30;
	
//	public void showPoint(){ 오버라이딩
//	System.out.println( " x 좌표 : " + x);
//	System.out.println( " y 좌표 : " + y);
//	System.out.println( " z 좌표 : " + z);
//	}
	
	public void showPoint () {
		super.showPoint(); //super클래스 타입의 객체의 showpoint 호출 
		System.out.println(" z 좌표 : " + z);
	}
	public Point3D07(){
//		super(); //슈퍼클래스의 생성자가 있으면 자동으로 첫번째 라인에 호출해줌 
		super(99);
		System.out.println("Point3D07()");
	}
}

public class Ch0410Ex7rid {
	public static void main(String[] args){
		Point2D07 pt2 = new Point2D07();
		pt2.x = 100;
		pt2.y = 200;
		pt2.showPoint();
		
		Point3D07 pt = new Point3D07();
		pt.showPoint();
		
		Point2D07 pt2d = new Point3D07();
//		pt2d.z = 70;
		pt2d.showPoint();
	}

}
