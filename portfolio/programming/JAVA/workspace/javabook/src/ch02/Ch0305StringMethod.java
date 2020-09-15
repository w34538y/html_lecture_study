package ch02;

public class Ch0305StringMethod {
	public static void main(String[] args){
		String str1 = "java";
		String str2 = "java";
		String str3 = new String("java");
		String str4 = new String("java");
		System.out.println("[** 비교결과 **");
		System.out.println("str1 = str2 : "+ (str1 == str2));
		System.out.println("str3 = str4 : "+ (str3 == str4));
		System.out.println("str1 = str3 : "+ (str1 == str3));
		System.out.println("str3 = str4 : "+ (str3 == str4));

		System.out.println(" {** 메소드 비교 결과 **]");
		System.out.println("str1 = str2 : "+ (str1.equals(str2)));
		System.out.println("str3 = str4 : "+ (str3.equals(str4)));
		System.out.println("str1 = str3 : "+ (str1.equals(str3)));
		System.out.println("str3 = str4 : "+ (str3.equals(str4)));
	}
}
