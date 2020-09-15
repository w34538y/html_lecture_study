package ch05;

public class Ch0502Ex2th1 {
	
	public static void throwException(){
		System.out.println(">> throwException 함수 호출<<");
		
		try{
			System.out.println(0/0);
		}catch (Exception e){
			e.printStackTrace();
		}
	}
	public static void main(String[] args){
		System.out.println(">>main 함수에서 예외를 발생시키는 함수 호출<<");
		throwException();
		
		
		System.out.println(">>종료<<");
	}
}
