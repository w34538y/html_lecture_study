package ch05;

class BizException1 extends Exception{ //사용자 예외 설정
	
	private static final long serialVersionUID = 1L;
	
	public BizException1(){
		super("BizException1");
	}
	
	public BizException1(String msg){
		super(msg); // == Exception(msg)
	}
}

public class Ch0503Ex3biz1 {
	
	public static void throwException(){
		System.out.println(">> throwException 함수 호출 <<");
//		 throw new BizException1("id가 비었습니다");
		BizException1 be = new BizException1("id가 비었습니다.");
		try{
			throw be;
		}catch(BizException1 e) {
			e.printStackTrace();
		}catch(Exception e){
			System.out.println("Exception 발생");
			e.printStackTrace();
		}
	}
	
	public static void main(String[] args){
		System.out.println(">>main 함수에서 예외를 발생시키는 함수 호출<<");
		throwException();
		System.out.println(">>정상종료<<");
	}
}


