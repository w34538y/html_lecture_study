package ch02;

import java.util.Scanner;

public class Ch0307Ex5Yun1 {
	
	public static void main(String[] args){

		Scanner sc;
		sc = new Scanner(System.in);
		System.out.println("년도를 입력하세요 : ");
		int nYear = sc.nextInt();
		
		boolean bYun;
		
		int n4;
		int n100; 
		int n400;
		
		
		n4 = nYear % 4;
		n100 = nYear % 100;
		n400 = nYear % 400;
		
		
		if((n4 == 0 && n100 != 0)|| n400 == 0)
			bYun = true;
		else
			bYun = false;
		
		System.out.println(nYear+"년의 윤년 여부는 "+ bYun + "입니다");
		
		sc.close();
	}

}
