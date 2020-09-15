package ch04;

public class EatApple implements EatFruit {
	String NAME = "apple";
	
	@Override
	public void wash(){
		System.out.println("wash an "+ NAME);
	}
	
	@Override
	public void cut(){
		System.out.println("cut an "+ NAME);
	}
	
	@Override
	public void eat(){
		System.out.println("eat an "+ NAME);
	}
	
	@Override
	public void finish(){
		System.out.println("finish\n\n ");
	}

}
