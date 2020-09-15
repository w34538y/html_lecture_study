package ch05;

public class Ch0501Exlerr {
	public static void main(String[] args){
		try{
			String c = null;
			System.out.println("문자열의 값은 : " + c.toString());
			System.out.println(0/0); //ArithmeticException e
		}catch(NullPointerException e){
			e.printStackTrace(); // 출력java.lang.NullPointerException at ch05.Ch0501Exlerr.main(Ch0501Exlerr.java:7)
			System.out.println("NullPointer");
//		}catch(ArithmeticException e){
//			e.printStackTrace();
//			System.out.println("Arithmetic");
		}catch(Exception e){	
			e.printStackTrace();
			System.out.println("Exception");			
		}finally{
			System.out.println("finally 연습");
			System.out.println("예외발생 여부와 상관없이 반드시 수행");
		}
		System.out.println(">>종료<<");
	}

}
