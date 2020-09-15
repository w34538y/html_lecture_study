package ch04;

class Point05 {
	int x;
	int y;


public Point05() {
//	x = 10;
//	y = 10;
	this(10,10);
	
}

public Point05(int x){
//	this.x = x;
//	y = 10;
	this(x, 10);
}

public Point05(int x, int y){
	this.x = x;
	this.y = y;
}

public void setX(int x){
//	x = x;
	this.x = x;
}

public void showPoint05(){
	System.out.println("("+ x +","+ y + ")");
}


}

public class Ch0407Ex5this {
	public static void main(String[] args){
		Point05 pt01 = new Point05(10, 20);
		pt01.showPoint05();
		Point05 pt02 = new Point05(30);
		pt02.showPoint05();
		Point05 pt03 = new Point05();
		pt03.showPoint05();
		
		
	}

}
