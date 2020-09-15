package ch05;

public class Ch0502Ex2th {
	public static void throwException() throws Exception {
		System.out.println(">> throwException 함수 호출<<");
//		throw new Exception("사용자가 예외 발생시킴");
		try{
			System.out.println(0/0);
			throwException();
		}catch(Exception e){
			System.out.println(">> catch 구문: 예외를 처리한다.<<");
			e.printStackTrace();
		}
		
	}
	public static void main(String[] args){
		try{
			System.out.println(">>main 함수에서 예외를 발생시키는 함수 호출<<");
			throwException();
		}catch(Exception e){
			System.out.println(">> catch 구문: 예외를 처리한다.<<");
			e.printStackTrace();
		}
		System.out.println(">>종료<<");
	}

}
