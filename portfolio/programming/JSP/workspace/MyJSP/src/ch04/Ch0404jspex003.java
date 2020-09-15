package ch04;
//page 디렉티브
import java.util.Date;

public class Ch0404jspex003 {
	
	public static void main(String[] args) {
//		 System.out.println(new java.util.Date());
//       Date dt = new Date();
		 Date dt = getDate();
		 System.out.println(dt);
	}
	
	public static Date getDate(){
		Date dt = new Date();
		return dt;
	}
}
