package ch04;

class IntProc3{
	int x ;
	int y ;
	int z ;

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
public int getZ(){
	return z;
}
public void setZ(int z){
	this.z = z;
}
public int max(){
	return((x > y) ? x : y);	
}
}