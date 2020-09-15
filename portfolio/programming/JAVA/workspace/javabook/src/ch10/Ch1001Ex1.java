package ch10;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class Ch1001Ex1 {
	
	public static void main(String[] args){
		
		String driver   = "oracle.jdbc.driver.OracleDriver";
		String url 	    = "jdbc:oracle:thin:@localhost:1521:XE"; // localhost:port/db명
		String user     = "hr";
		String password = "hr";
		
		int cnt = 0;
		
		String sql;
//		Statement stmt;							// 정적 SQL용 빈통 만들기, 동적은 prepareStatement
		PreparedStatement pstmt = null;			// 정적 SQL용 빈통 만들기, 동적은 prepareStatement
		ResultSet rs = null;
		Connection con = null;
		
		try {
			Class.forName(driver);				// driver를 메모리로 로딩
			System.out.println("Driver Loading success");
			
			con = DriverManager.getConnection(url, user, password);
			System.out.println("DB connected...");
			
			sql = "SELECT * FROM regions";
//			stmt = con.createStatement();    	// 정적 SQL용 빈통 만들기, 동적은 prepareStatement
			pstmt = con.prepareStatement(sql);  // 정적 SQL용 빈통 만들기, 동적은 prepareStatement
//			rs = stmt.executeQuery(sql); 		// select용, CUD는 executeUpdate
			rs = pstmt.executeQuery();			// select용, CUD는 executeUpdate
			
			cnt = 0;
			
			while (rs.next())					//data fetch
			{
				System.out.print(rs.getInt("REGION_ID")+ "\t");
				System.out.println(rs.getString("REGION_NAME"));
				
			}
			
			if( cnt > 0 )
				System.out.println("정상조회 완료");
			else
				System.out.println("자료가 없음");
		} catch(Exception e){
			e.printStackTrace();
		}finally{
			try{
				if( rs != null ) 	//결과 실행문
					pstmt.close();
			}catch(Exception e){}
			try{
				if( pstmt != null ) // 쿼리 실행문 
					pstmt.close();
			}catch(Exception e2){}
			try{
				if( con != null ) 	// 커넥트
					pstmt.close();
			}catch(Exception e3){}
			
		}
	}

}
