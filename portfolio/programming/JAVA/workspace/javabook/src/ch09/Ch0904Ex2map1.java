package ch09;

import java.util.*;

public class Ch0904Ex2map1 {
	
	public static void main(String[] args){
		HashMap<String, String> hm = new HashMap<String, String>(); //HashMap에 wrapper 클래스로 집어넣기 가능
		
		//해쉬맵에 키/데이터를 입력한다.
		hm.put("홍길동", "010-111-1111");
		hm.put("성춘향", "010-222-2222");
		hm.put("한석봉", "010-333-3333");
		
		//해쉬맵의 값을 키를 이용하여 얻는다.
		String Val = (String)hm.get("포도");
		if(Val == null)
			System.out.println("포도 -> 해당 키 없음");
		else
			System.out.println("포도 -> "+ Val);
		
		//해쉬맵의 값을 키를 이용하여 얻는다.
		Val = (String)hm.get("성춘향");
		if(Val != null)
			System.out.println("성춘향 -> "+ Val);
		
				Set<String> set = hm.keySet();
				for (String key : set) {
					System.out.println(key + "-> " + (String)hm.get(key));
					
				}
		System.out.println();
	}

}
