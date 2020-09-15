package ch09;

import java.util.*;


public class Ch0904Ex2map1Grade {
	
	public static void main(String[] args){
		HashMap<String, Object> hm = null;
		
		hm = input();
		output(hm);
	}

	public static HashMap<String, Object> input(){
		HashMap<String, Object> hm = new HashMap<String, Object>();
		Scanner sc = new Scanner(System.in);
		int code, kor, eng, mat;
		String name;
		
		System.out.println("코드 입력: ");
		code = sc.nextInt();
		
		System.out.println("성함 입력: ");
		name = sc.next();
		
		System.out.println("국어 입력: ");
		kor = sc.nextInt();
		
		System.out.println("수학 입력: ");
		mat = sc.nextInt();
		
		System.out.println("영어 입력: ");
		eng = sc.nextInt();
		
		hm.put("CODE", code);
		hm.put("NAME", name);
		hm.put("KOR", kor);
		hm.put("MAT", mat);
		hm.put("ENG", eng);
		sc.close();
		
		return hm;
	}
	
	public static void output( HashMap<String, Object> hm){
		int code, kor, eng, mat;
		String name;
		
		code = (int)hm.get("CODE");
		name = (String)hm.get("NAME");
		kor = (int)hm.get("KOR");
		eng = (int)hm.get("ENG");
		mat = (int)hm.get("MAT");
		
		System.out.println("CODE =>" + code);
		System.out.println("NAME =>" + name);
		System.out.println("KOR =>" + kor);
		System.out.println("ENG =>" + eng);
		System.out.println("MAT =>" + mat);
	}
}
