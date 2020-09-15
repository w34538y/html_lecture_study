package ch04;

public class IntProcRun {
	public static void main(String[] args){
		IntProc big = new IntProc();
		big.setX(10);
		big.setY(8);
		int max = big.max();
		
		System.out.println("x의 값은 "+ big.getX()+ "  y의 값은 "+ big.getY()+ "중에서 큰 값은" + max + "입니다.");
		
	}

}
