package ch02;

public class Ch0319Ex14 {
	public static void main(String[] args){
		int a = -5, result;
		
		result = abs(a); // 메소드의 결과값을 변수 result에 대입한다.
		System.out.println(a+"의 절댓값은" + result+"이다");
		
		System.out.println(10+"의 절댓값은 "+ abs(10) + "이다");
		
	}

	static int abs(int x){
		int y;
		
		if(x < 0)
			y = -x;
		else
			
			y = x;
		
		
		return y; //구해진 결과값을 리턴
	}
}
