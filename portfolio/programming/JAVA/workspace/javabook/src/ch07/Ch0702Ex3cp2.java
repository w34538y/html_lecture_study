package ch07;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

public class Ch0702Ex3cp2 {
	
	public static void main(String[] args) throws IOException{
		
		InputStream   in  = new FileInputStream("org.bin");
		OutputStream  out = new FileOutputStream("cpy.bin");
		
		BufferedInputStream   bin  = new BufferedInputStream(in);
		BufferedOutputStream  bout = new BufferedOutputStream(out);
		
		int copyByte = 0;
		int bData;
		
		while(true)
		{
			bData = bin.read();
			if(bData == -1) //-1 = 파일의 끝
				break;
			
			bout.write(bData);
			copyByte++;
		}
		bin.close();
		bout.close();
		System.out.println("복사된 바이트 크기 "+ copyByte);
	}

}
