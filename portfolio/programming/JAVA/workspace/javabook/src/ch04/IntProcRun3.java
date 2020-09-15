package ch04;

public class IntProcRun3 {
	public static void main(String[] args){
		IntProc big = new IntProc();
		big.setX(5);
		big.setY(8);
		int max = big.max();
		
		IntProc big2 = new IntProc();
		big2.setX(15);
		big2.setY(17);
		int max2 = big2.max();
		
		IntProc big3 = new IntProc();
		big3.setX(max);
		big3.setY(max2);
		int max3 = big3.max();
		
		
		
		System.out.println("값1는 "+ big.getX()+ "  값2는 "+ big.getY() +" 값3은 "+ big2.getX()+ " 값4는 " + big2.getY()+"  중에서 큰 값은" + max3 + "입니다.");
		
	
	}

}
