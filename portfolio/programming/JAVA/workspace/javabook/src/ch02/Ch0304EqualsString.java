package ch02;

public class Ch0304EqualsString {
	public static void main(String[] args) {
		int alength, blength;
		char achar, bchar;
		String str1 = new String("java Powerful");
		String str2 = new String("java Programming");
		String str3 = str1 + str2;
		alength = str1.length();
		blength = str2.length();
		achar = str1.charAt(5);
		bchar = str1.charAt(10);
		System.out.println("str1에 저장 ="+str1+" 길이="+alength);
		System.out.println("str2에 저장 ="+str2+" 길이="+blength);
		System.out.println("str3에 저장 ="+str3);
		System.out.println("str1의 5번째 문자 "+achar);
		System.out.println("str2의 10번째 문자 "+bchar);
		System.out.println("str1의 대문자 변환 "+str1.toUpperCase());
		System.out.println("str2의 대문자 변환 "+str2.replace('a','A'));
	}
}
