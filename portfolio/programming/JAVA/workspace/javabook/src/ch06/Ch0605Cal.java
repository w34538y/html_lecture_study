package ch06;

import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class Ch0605Cal {
	
	public static void main(String[] args){

		// 가급적 Date는 사용 자제 (API설명java.util/Date/메소드개요 참조)
		Date today = new Date();
		System.out.println(today);
		SimpleDateFormat sdf = new SimpleDateFormat("yyyy년 MM월 dd일 HH시 mm분 ss초");
		String sCur = sdf.format(today).toString();
		System.out.println(sCur);
		
//		Calendar now = new Calendar(); 
		Calendar now = Calendar.getInstance(); //싱글 톤 객체 Calendar가 만들어진걸 now에서 참조함 
		//싱글톤 객체를 쓰는것은 getInstance를 사용
		int yy = now.get(Calendar.YEAR);
		int mm = now.get(Calendar.MONTH)+1; //0~11로 리턴되기때문에 +1해줌
		int dd = now.get(Calendar.DATE);
		int hh = now.get(Calendar.HOUR_OF_DAY);
		int mi = now.get(Calendar.MINUTE);
		int ss = now.get(Calendar.SECOND);
		int ml = now.get(Calendar.MILLISECOND);
		System.out.println(yy+"년 "+mm+"월 "+dd+"일 "+hh+"시 "+mi+"분 "+ss+"초 "+ml+"ms");
		// 해당 프로그램의 날짜는 작동중인 PC의 날짜를 가져와서 신뢰도가 낮음.
		// 데이터베이스 서버의 날짜를 가져다 쓰는게 제일 신뢰도 좋음. (회사마다 내부 라이브러리를 사용)
	}
	

}
