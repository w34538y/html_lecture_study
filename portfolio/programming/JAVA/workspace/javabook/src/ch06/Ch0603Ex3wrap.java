package ch06;

public class Ch0603Ex3wrap {
	
	public static void main(String[] args){
		
		// 기본데이터형 > String,valueOf로 String 변환
		//String str = String.valueOf(i);
		//기본데이터형 <= Wrapper클래스.parse기본데이터형(String 객체) <=String
		// int	INteger.parseInt(string)
		//double Double.parseDouble(string)
		
		int 	i 	   = 3;
		int 	j 	   = 5;
		int 	k 	   = -7;
		
		Integer intI   = null;
		String  str    = null;
		String  str33  = "33";
		String  str55  = "55";
		
		intI =i; 		// autoboxing
		str = intI.toString();
		System.out.println(str);
		
		str = new Integer(j).toString();
		System.out.println(str);
		
		//추천
		str = String.valueOf(k);
		System.out.println(str);
		
		i = Integer.valueOf(str33); // autounboxing
		System.out.println(i);
		
		//추천
		j = Integer.valueOf(str55);
		System.out.println(j);
	}

}
