package ch04;

public class Ch0408Ex5 {
	static int num1 = 10;
	int num2 = 10;
	
	public static void main(String[] args){
		System.out.println("Ch0408Ex5.num1 = " + Ch0408Ex5.num1);
		
		Ch0408Ex5.num1 = 70;
		System.out.println("Ch0408Ex5.num1 = " + Ch0408Ex5.num1);
//		객체 소속이 아니라서 값이 나옴
		
		Ch0408Ex5 ex1 = new Ch0408Ex5();
		Ch0408Ex5 ex2 = new Ch0408Ex5();
		
//		ex1.num1 = 20;
//		ex2.num1 = 30;
//		System.out.println("ex1.num1 =" + ex1.num1);
//		System.out.println("ex2.num1 =" + ex2.num1);  주석처리된곳은 쓰면안됨 
		
		Ch0408Ex5.num1 = 20;
		Ch0408Ex5.num1 = 30; //클래스소속은 클래스이름으로 접근해야
		System.out.println("Ch0408Ex5.num1 = " + Ch0408Ex5.num1); //20이 깨져서 30이 출력됨
		System.out.println("Ch0408Ex5.num1 = " + Ch0408Ex5.num1);
		
		ex1.num2 = 30;
		ex2.num2 = 50;
		System.out.println("ex1.num1 = " + ex1.num2);
		System.out.println("ex2.num1 = " + ex2.num2);
	}
	

}
