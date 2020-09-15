package ch04;

interface Eating{
	void wash();
	void eat();
	void cut();
	void finish();
	
}
class Tomato implements Eating{
	public void wash(){
		System.out.println("wash tomato");
	}
	public void cut(){}
	public void eat(){
		System.out.println("eat a Tomato");
	}
	public void finish(){
		System.out.println("cleaning \n\n");
	}
}


class Apple implements Eating{
	public void wash(){
		System.out.println("wash Apple");
	}
	public void cut(){
		System.out.println("cut Apple");
	}
	public void eat(){
		System.out.println("eat an Apple");
	}
	public void finish(){
		System.out.println("cleaning \n\n");
	}
}


