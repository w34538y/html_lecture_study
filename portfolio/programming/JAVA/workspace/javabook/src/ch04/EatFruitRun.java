package ch04;

public class EatFruitRun {
	public static void main(String[] args){
	
	EatFruit ef = null;
	
	ef = new EatApple();
	doEatFruit(ef);
	
	ef = new EatTomato();
	doEatFruit(ef);
	

}
	
	public static void doEatFruit(EatFruit ef){
		ef.wash();
		ef.cut();
		ef.eat();
		ef.finish();
	}
}
