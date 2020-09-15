package ch04;

interface Drawable13{
//	public static final int NUM = 1;
	int NUM = 1;
//	public abstract void draw();
	void draw();
}

class Circle13 implements Drawable13{
	@Override
	public void draw(){
		System.out.println(Drawable13.NUM+"개의 원을 그리다.");
	}
}

public class Ch0417Ex13 {
	public static void main(String[] args){
		Circle13 cc = new Circle13();
		cc.draw();
		
		Drawable13 ref;			//인터페이스로 레퍼런스 변수 선언은 가능하다.
		ref = new Circle13();	//서브 클래스인 Circle 인스턴스를 생성한다.
		ref.draw();				//업캐스팅 후, Circle 클래스의 draw 메소드가 호출
	}

}
