package ch04;

public class EatTomato implements EatFruit{
	String NAME = "tomato";
	
	@Override
	public void wash(){
		System.out.println("wash an "+ NAME);
	}
	
	@Override
	public void cut(){	}
	
	@Override
	public void eat(){
		System.out.println("eat an "+ NAME);
	}
	
	@Override
	public void finish(){
		System.out.println("finish\n\n ");
	}
}
