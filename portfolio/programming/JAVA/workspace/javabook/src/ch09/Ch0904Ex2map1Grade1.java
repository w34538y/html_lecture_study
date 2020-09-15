package ch09;

import java.util.*;

public class Ch0904Ex2map1Grade1 {
	
	public static void main(String[] args){
		ArrayList<HashMap<String, Object>> list = null;
		
		list = input();
		output( list );
	}
	
	
	public static ArrayList<HashMap<String, Object>> input(){
		ArrayList<HashMap<String, Object>> list = new ArrayList<HashMap<String, Object>>();
		
		Scanner sc = new Scanner(System.in);
		int code, kor, eng, mat;
		String name;
		
		for(int i=0; i<2; i++)
		{
			HashMap<String, Object> hm = new HashMap<String, Object>();
			
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
			
			list.add(hm);
		}
		sc.close();
		
		return list;
	}
	
	public static void output( ArrayList<HashMap<String, Object>> list){
		int code, kor, eng, mat;
		String name;
		
		for( int i = 0; i<2; i++)
		{
			HashMap<String, Object> hm = list.get(i);
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

	

}
