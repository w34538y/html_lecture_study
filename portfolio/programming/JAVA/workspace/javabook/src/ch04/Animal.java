package ch04;

public class Animal {
	int age;
	String name;
	boolean live;
	public Animal(){
	}
	public Animal(String n, int age, boolean live){
		name = n;
		this.age = age;
		this.live = live;
	}
	public void setName(String n){
		name = n;
	}
	
	public String getName(){
		return name;
	}
	public boolean getLive(){
		return live;
	}
	
	
	
	

}
