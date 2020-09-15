package ch02;

public class Ch0318ExX3int {
	public static void main(String[] args){
		int [] a = {85, 90, 75, 100, 95 };
		int tot = 0;
		double avg;
//		int i;
		
//		for( i = 0; i < 5; i++) //c언어 for문
//		for( i = 0; i < a.length; i++) //java for문
//			tot += a[i];

		for(int score : a) //최신형 for문  :오른쪽= 배열이름 :왼쪽= 배열 구성요소로부터 하나씩 처리함
			tot += score;
		
//		avg = (double) tot / 5.0;
		avg = (double) tot / a.length;
		
		System.out.println("총합 =" + tot);
		System.out.println("평균 =" + avg);
	}
}
