package ch04;

public class Pointswap {
	private int x;
	private int y;
	
	public Pointswap() {
		super();
	}
	public int getX() {
		return x;
	}
	public void setX(int x){
		this.x = x;
	}
	public int getY(){
		return y;
	}
	public void setY(int y){
		this.y = y;
	}
	
	public void swap(){
		int tmp = x;
		x = y;
		y = tmp;
	}

}
