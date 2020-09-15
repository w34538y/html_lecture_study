package ch06;

public class Ch0603Ex3wrapEX1 {
	
	public static void main(String[] args){
		
		int i = 123;
		double d = 12.3;
		
		String strI = String.valueOf(i);
		System.out.println(strI);
		
		String strD = String.valueOf(d);
		System.out.println(strD);
		
		int ii = Integer.parseInt(strI)+1;
		System.out.println(ii);

		double dd = Double.parseDouble(strD)+1;
		System.out.println(dd);
	}
}