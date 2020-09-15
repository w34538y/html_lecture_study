package ch07;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class Ch0701Ex3cp1 {
	
	public static void main(String[] args) throws IOException{
		FileInputStream  in  = new FileInputStream("org.bin");
		FileOutputStream out = new FileOutputStream("cpy.bin");
		
		int copyByte = 0;
		int bData;
		
		while(true)
		{
			bData = in.read();
			if(bData == -1) //-1 = 파일의 끝
				break;
			
			out.write(bData);
			copyByte++;
		}
		in.close();
		out.close();
		System.out.println("복사된 바이트 크기 "+ copyByte);
	}

}
