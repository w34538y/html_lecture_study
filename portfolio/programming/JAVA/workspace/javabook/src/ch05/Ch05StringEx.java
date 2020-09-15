package ch05;

public class Ch05StringEx {
	public static void main(String[] args){
//		String ans = "y";
		String ans = null; //메소드 호출문이 heap에 없어서 프로그램이 죽음

		if("y".equals(ans)){ //숏 서킷룰을 이용해도됨( ans != null && ans.equals(ans) )
			System.out.println("OK");
		}
		else if("n".equals(ans)){ //이 경우는 heap 영역에 메소드가 생성됨 
			System.out.println("good");
		}
		
		else{
			System.out.println("다시 입력하세요.");
		}
		
	}

}
