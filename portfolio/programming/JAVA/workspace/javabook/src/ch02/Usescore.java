package ch02;

public class Usescore {
	
	Score scr = new Score();
	
	scr.setKor(100);
	scr.setEng(90);
	scr.setMat(80);
	
	scr.cmptot();
	scr.cmpavg();
	
	System.out.println( scr.getKor() + "," + scr.get);

}
