package ch02;

public class ch03 {

	public static void main(String[] args) {
		int num1 = 12;
		int num2 = 20;
		int result = num1 + num2;
//		System.out.println();  sysout 누르고 ctrl+space하면 자동완성
		System.out.println(num1 + " + " + num2 + " = " + result);
		System.out.printf("%d + %d = %d", num1, num2, result);
		
		System.out.println();
		//이름: 을 출력한 후 줄이 바뀌지않는다.
		System.out.print("이름 : ");
		//이름 : 뒤에 연속해서 홍길동을 출력한 후 줄이 바뀐다.
		System.out.println("홍길동");
		//직업: 을 출력한 %s 위치에 교수를 출력한 후 줄이 바뀌지 않는다.
		System.out.printf("직업: %s ", "교수");
	} 

}
