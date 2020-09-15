package ch10;


import java.math.BigDecimal;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.Scanner;

public class Ch1002Ex2 {
	
	public static void main(String[] args) throws Exception{
		
		Scanner sc = new Scanner(System.in);
		
		String driver   = "oracle.jdbc.driver.OracleDriver";
		String url 	    = "jdbc:oracle:thin:@localhost:1521:XE"; // localhost:port/db명
		String user     = "dev";
		String password = "123456";
		
		String sql, gubun, sqlKey;
		PreparedStatement pstmt, pstmtKey;	// 정적 SQL용 빈통 만들기, 동적은 prepareStatement
		ResultSet 		  rs, rsKey;
		
		int 	   n_code;
		String	   s_name, s_email, s_tel;
		BigDecimal bd_asset;
		
		int cnt;
		
		Class.forName(driver);		//driver를 메모리로 로딩
		System.out.println("Driver Loading Sucess");
		
		Connection con = DriverManager.getConnection(url, user, password);
//		con.setAutoCommit(false); 	// commit, rollback 사용시 필요
		System.out.println("DB connected");
		
		while(true)
		{
			System.out.print("1: 조건 조회, 2: 입력, 3: 전화번호 변경, 4: 삭제, 9: 종료 =");
			gubun = sc.next();
			
			if( "9".equals(gubun) )			//9: 종료
			{
				System.out.println("종료합니다.");
				break;
			}
			
			if( "1".equals(gubun))				//1: 조건 조회
			{
				sql    = "SELECT * FROM CUSTOMER WHERE CODE >= ? ORDER BY CODE";
				pstmt  = con.prepareStatement(sql);
				System.out.print("코드				  >>");
				n_code = sc.nextInt();
				pstmt.setInt(1, n_code);
				
				
				rs 	   = pstmt.executeQuery();	// select용, CUD는 executeUpdate
				
				cnt = 0;
				
				while (rs.next())				//data fetch, 다건조회
				{
					System.out.print(rs.getInt(1)	  + "\t");
					System.out.print(rs.getString(2)  + "\t");
					System.out.print(rs.getString(3)  + "\t");
					System.out.print(rs.getString(4)  + "\t");
					System.out.println(rs.getBigDecimal(5)); 	//double보다 더 큰자릿수 수용가능
					
					cnt++;
				}
				
				if( cnt > 0 )
					System.out.println("정상 조회됨");
				else
					System.out.println("해당 자료가 없음");
				
				rs.close();
				pstmt.close();
			}
			
			if( "2".equals(gubun))
			{
				sql = "INSERT INTO CUSTOMER(code, name, email, tel, asset)"+ "VALUES(?, ?, ?, ?, ?)";
				pstmt = con.prepareStatement(sql);
				System.out.println("고객정보를 입력하세요.");
				System.out.print("코드		>>");
				n_code   = sc.nextInt();
				System.out.print("이름		>>");
				s_name   = sc.next();
				System.out.print("이메일		>>");
				s_email  = sc.next();
				System.out.print("전화번호		>>");
				s_tel    = sc.next();
				System.out.print("자산		>>");
				bd_asset = sc.nextBigDecimal();
				
				pstmt.setInt	   (1, n_code);
				pstmt.setString    (2, s_name);
				pstmt.setString	   (3, s_email);
				pstmt.setString	   (4, s_tel);
				pstmt.setBigDecimal(5, bd_asset);
				
				cnt = pstmt.executeUpdate();
				
				if( cnt > 0 )
					System.out.println("정상 조회됨");
				else
					System.out.println("해당 자료가 없음");
				
//				con.rollback();
//				con.commit();
				
				pstmt.close();
				
			}
			
			if( "3".equals(gubun) )
			{
				sql = "UPDATE CUSTOMER SET tel = ? WHERE code = ?";
				pstmt = con.prepareStatement(sql);
				System.out.println("전화번호를 변경할 회원코드를 입력하세요");
				System.out.print("코드		 >>");
				n_code = sc.nextInt();
				System.out.print("변경할 전화번호 >>");
				s_tel = sc.next();
				
				pstmt.setString(1, s_tel);
				pstmt.setInt(2, n_code);
				
				cnt = pstmt.executeUpdate();
				
				if( cnt > 0 )
					System.out.println("정상 조회됨");
				else
					System.out.println("해당 자료가 없음");
				
//				con.rollback();
//				con.commit();
				
				pstmt.close();
				
			}
			
			if( "4".equals(gubun) )				//4: 삭제
			{
				sql = "DELETE FROM CUSTOMER WHERE code = ?"; //값이 바뀌는 부분은 ?로 처리함
				pstmt = con.prepareStatement(sql);
				System.out.println("삭제할 회원 코드를 입력하세요");
				System.out.print("코드		>>");
				n_code = sc.nextInt();
				
				sqlKey = "SELECT * FROM CUSTOMER WHERE CODE = ?";
				pstmtKey = con.prepareStatement(sqlKey);
				pstmtKey.setInt(1,n_code);
				
				rsKey = pstmtKey.executeQuery();
				
				if( !rsKey.next() ) //단건조회, 데이터가 없어서 false로 return해줘야 함 
				{
					System.out.println("해당 자료가 없습니다.");
					rsKey.close();
					pstmtKey.close();
					
					continue;
					
				}
				
				
				pstmt.setInt(1, n_code); 		//?와 값을 바인딩시켜줌 
				
				cnt = pstmt.executeUpdate();
				
				if( cnt > 0 )
					System.out.println("정상 조회됨");
				else
					System.out.println("해당 자료가 없음");
				
//				con.commit(); //오토commit을 쓰기에 비활성화 함
				
				pstmt.close();
			}
		}
		
		con.close();
		sc.close();
	}

}
