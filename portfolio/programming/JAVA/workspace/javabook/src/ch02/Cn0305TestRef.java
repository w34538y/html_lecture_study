package ch02;

class PT{
	int x = 5;
	int y = 5;
}
public class Cn0305TestRef {
	public static void main(String[] args){
		int i = 5;
		
		PT pt = new PT();
		System.out.println(i+","+ pt.x +","+ pt.y);
		test(i, pt);
		System.out.println(i+","+ pt.x + "," + pt.y);
		
	}
	public static void test( int i, PT pt){
		i = 3;
		pt.x = 3;
		pt.y = 3;
		
	}
	
	
}
