package ch09;

import java.util.ArrayList;
import java.util.Iterator;


public class Ch0901Ex1arr1 {
	
	public static void main(String[] args){
//		ArrayList<String> list = new ArrayList<String>();
//		// List<String> list = new ArrayList<String>();
//		
//		
//		list.add("사과");   // 내부에서 자동적으로 0번이 됨 
//		list.add("바나나"); //1
//		list.add("귤"); 	 //2
//		list.add("오렌지"); //3
//		list.add("바나나"); //4
//		ArrayList<String> list = input();

		
//		System.out.println("요소의 갯수-> "+ list.size());
//		
//		System.out.println(">>Iterator 객체로 요소 얻기 <<");
//		Iterator<String> elements = list.iterator();
//		
//		while(elements.hasNext())
//			System.out.println(elements.next()+"\t");
//		System.out.println("\n");
//		
//		System.out.println(">> get 메소드로 요소 얻기<<"); //실제로는 이걸 제일 많이 씀 
//		for(int i = 0; i< list.size(); i++)
//			System.out.println(list.get(i)+"\t");
//		System.out.println("\n");
//		
//		System.out.println(">> 확장 for문으로 요소 얻기<<"); //많이 씀 
//		for(String frute : list)
//			System.out.println(frute+"\t");
//		System.out.println();
		ArrayList<String> list = input();
		output(list);
	}
	
	public static ArrayList<String> input() {
		ArrayList<String> list = new ArrayList<String>();
		// List<String> list = new ArrayList<String>();
		
		
		list.add("사과");   // 내부에서 자동적으로 0번이 됨 
		list.add("바나나"); //1
		list.add("귤"); 	 //2
		list.add("오렌지"); //3
		list.add("바나나"); //4
		return list;
	}
	
	public static void output(ArrayList<String> list){
		
		System.out.println("요소의 갯수-> "+ list.size());
		
		System.out.println(">>Iterator 객체로 요소 얻기 <<");
		Iterator<String> elements = list.iterator();
		
		while(elements.hasNext())
			System.out.println(elements.next()+"\t");
		System.out.println("\n");
		
		System.out.println(">> get 메소드로 요소 얻기<<"); //실제로는 이걸 제일 많이 씀 
		for(int i = 0; i< list.size(); i++)
			System.out.println(list.get(i)+"\t");
		System.out.println("\n");
		
		System.out.println(">> 확장 for문으로 요소 얻기<<"); //많이 씀 
		for(String frute : list)
			System.out.println(frute+"\t");
		System.out.println();
		
		
	}

}
