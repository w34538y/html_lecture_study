package ch09;

//imput 메소드에서 scanner를 이용하여
//코드(int), 성명(String), 학점(Double)으로 구성된
//2건의 데이터를 입력 받은 후 
//main으로 전달하고
//main에서는 proc메소드로 다시 전달하여
//proc에서는 건수와 총점, 평균을 구하여 입력받은 원시 데이터와 함께
//main으로 전달하고
//main에서는 out메소드로 다시 전달하여
//코드(int), 성명(String), 학점(Double) 2건의 정보와
//건수, 총점, 평균을 화면 출력

import java.util.*;

public class Ch0904Ex2map1Grade2 {
	public static void main(String[] args){
		ArrayList<HashMap<String, Object>> list = null;
		HashMap<String, Object>			   hm 	= null;
		
		list = input();
		hm = proc( list );
		output( hm );
	}
	
	
	public static ArrayList<HashMap<String, Object>> input(){
		ArrayList<HashMap<String, Object>> list = new ArrayList<HashMap<String, Object>>();
		
		Scanner sc = new Scanner(System.in);
		int code;
		double score;
		String name;
		
		for(int i=0; i<2; i++)
		{
			HashMap<String, Object> hm = new HashMap<String, Object>();
			
			System.out.println("코드 입력: ");
			code = sc.nextInt();
			
			System.out.println("성함 입력: ");
			name = sc.next();
			
			System.out.println("학점 입력: ");
			score = sc.nextDouble();
			
			
			hm.put("CODE", code);
			hm.put("NAME", name);
			hm.put("SCORE", score);
			
			
			list.add(hm);
		}
		sc.close();
		
		return list;
	}
	
	public static HashMap<String, Object> proc(ArrayList<HashMap<String, Object>> list){
		
		HashMap<String, Object> hmRes = new HashMap<String, Object>();
//		int code;
//		String name;
		double score;
		double dTot = 0.0;

		for( int i = 0; i < list.size(); i++)
		{
			HashMap<String, Object> hm = list.get(i);
//			code = (int)	hm.get("CODE");
//			name = (String) hm.get("NAME");
			score = (double)hm.get("SCORE");
			
			dTot = dTot + score;
		}

		hmRes.put("LIST", list);
		hmRes.put("CNT", list.size());
		hmRes.put("TOT", dTot);
		hmRes.put("AVG", dTot / list.size());
		
		return hmRes;

		
	}
	
	public static void output( HashMap<String, Object> hmRes){
		
		int code;
		double score;
		String name;
		
		@SuppressWarnings("unchecked")
		ArrayList<HashMap<String, Object>> list = 
				(ArrayList<HashMap<String, Object>>) hmRes.get("LIST");
		
		for( int i = 0; i<list.size(); i++)
		{
			HashMap<String, Object> hm = list.get(i);
			
			code  = (int)	hm.get("CODE");
			name  = (String)hm.get("NAME");
			score = (double)hm.get("SCORE");
		
			System.out.println("CODE =>" + code);
			System.out.println("NAME =>" + name);
			System.out.println("SCO =>" + score);
		
		}
		System.out.println("CNT :"+ hmRes.get("CNT"));
		System.out.println("TOT :"+ hmRes.get("TOT"));
		System.out.println("AVG :"+ hmRes.get("AVG"));
	}

	

}
