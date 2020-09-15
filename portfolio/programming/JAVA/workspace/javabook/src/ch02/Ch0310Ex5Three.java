package ch02;

public class Ch0310Ex5Three {
	public static void main(String[] args){
		int a = 2, b = 3 , c = 1, max;
		
		max = (a > b) ? a : b;
		max = (max > c) ? max : c;
		
		System.out.println("가장 큰수는 "+ max + "이다.");
		
	}

}
