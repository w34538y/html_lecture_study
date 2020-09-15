package ch02;

public class Ch0302Ex2 {
	public static void main(String[] args){
		byte num1 = 'A';
		int result;
		
		int i = (int)(5. / 2.);
		short char1 ='}';
		char char2 = 66;
		char char3 = '태';
		long num2 = 9876543210L; // int의 최대값은 +-21억이기때문에 L을 넣어줘야함(long 타입으로 식별요청) 
		long num3 = 123123132;
//		int inum = num3;
		System.out.printf("num1 숫자 : %d\n", num1);
		System.out.printf("num2 숫자 : %c\n", num1);
		System.out.printf("char1 문자 : %d\n", char1);
		System.out.printf("char2 문자 : %c\n", char2);
		System.out.printf("char3 문자 : %c\n", char3);
		System.out.printf("num2 숫자 : %d\n", num2);
		System.out.printf("num3 숫자 : %d\n", num3);
		
		result = num1 + 30;
		System.out.println(" num1 + 30 = "+ result);
		
	}
}
