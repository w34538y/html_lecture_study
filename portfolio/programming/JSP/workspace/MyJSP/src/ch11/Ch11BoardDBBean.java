package ch11;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import javax.naming.Context;
import javax.naming.InitialContext;
import javax.sql.DataSource;

public class Ch11BoardDBBean {
	
	private static Ch11BoardDBBean instance = new Ch11BoardDBBean();
	//.jsp페이지에서 DB연동빈인 BoardDBBean클래스의 메소드에 접근시 필요
		public static Ch11BoardDBBean getInstance(){
			return instance;
		}
		
		private Ch11BoardDBBean() {}
		
		//커넥션풀로부터 Connection객체를 얻어냄
		private Connection getConnection() throws Exception {
			Context initCtx = new InitialContext();
			Context envCtx = (Context) initCtx.lookup("java:/comp/env");
			DataSource ds = (DataSource) envCtx.lookup("jdbc/jsp");
			return ds.getConnection();
		}
		
		//board테이블에 글을 추가(insert문)<=writePro.jsp페이지에서 사용
		public void insertArticle(Ch11BoardDataBean article) throws Exception{
			Connection conn = null;
			PreparedStatement pstmt = null;
			PreparedStatement pstmt2 = null;
			PreparedStatement pstmt3 = null;
			ResultSet rs = null;
			
		int num = article.getNum();
		int ref = article.getRef();
		int re_step = article.getRe_step();
		int re_level = article.getRe_level();
		int number = 0;
			String sql="";
			
			try {
				conn = getConnection();
				
				pstmt = conn.prepareStatement("select max(num) from board");
			rs = pstmt.executeQuery();
			
			if(rs.next())
				number =rs.getInt(1)+1;
			else
				number = 1;
			
			if (num!=0) { 
				sql = "update board set re_step=re_step+1";
				sql += "where ref=? and re_step> ?";
					pstmt2 = conn.prepareStatement(sql);
					pstmt2.setInt(1, ref);
				pstmt2.setInt(2, re_step);
				pstmt2.executeUpdate();
				re_step = re_step+1;
				re_level = re_level+1;
			}else{
				ref = number;
			re_step = 0;
			re_level = 0;
			}
				//쿼리를 작성
				sql = "insert into board(num, writer, email, subject, passwd, reg_date, "; 
				sql += "ref, re_step, re_level, content, ip) values ((SELECT NVL(MAX(NUM), 0) + 1 FROM BOARD),?,?,?,?,?,?,?,?,?,?)";
				
				pstmt3 = conn.prepareStatement(sql);
				pstmt3.setString(1, article .getWriter());
				pstmt3.setString(2, article .getEmail());
				pstmt3.setString(3, article .getSubject());
				pstmt3.setString(4, article .getPasswd());
				pstmt3.setTimestamp(5, article.getReg_date());
				pstmt3.setInt(6, ref);
				pstmt3.setInt(7, re_step);
				pstmt3.setInt(8, re_level);
				pstmt3.setString(9, article.getContent());
				pstmt3.setString(10, article.getIp());
				
				pstmt3.executeUpdate();
			}catch(Exception ex) {
				ex.printStackTrace();
			}finally {
			if( rs != null) try{ rs.close(); } catch(SQLException ex) {}
			if( pstmt != null) try{ pstmt.close(); } catch(SQLException ex) {}
			if( pstmt2 != null) try{ pstmt2.close(); } catch(SQLException ex) {}
			if( pstmt3 != null) try{ pstmt3.close(); } catch(SQLException ex) {}
			}
		}
		
			//board테이블에 저장된 전체글의 수를 얻어냄(select문)<=list.jsp에서 사용 
		public int getArticleCount() throws Exception{
			Connection conn = null;
			PreparedStatement pstmt = null;
			ResultSet rs = null;
			
			int x =0;
			
			try {
				conn =getConnection();
				
				pstmt = conn.prepareStatement("select count(*) from board");
				rs = pstmt.executeQuery();
				
				if(rs.next()){
					x = rs.getInt(1);
				}
				
			}catch(Exception ex){
				ex.printStackTrace();
			}finally {
				if( rs != null) try{ rs.close(); } catch(SQLException ex) {}
				if( pstmt != null) try{ pstmt.close(); } catch(SQLException ex) {}
				if( conn != null) try{ conn.close(); } catch(SQLException ex) {}
			}
			return x;
		}
		
	//글의 목록(복수개의 글)을 가져옴(select문)<=list.jsp에서 사용 
	public List<Ch11BoardDataBean> getArticles(int start, int end) throws Exception{
		Connection conn = null; 
		PreparedStatement pstmt = null;
		ResultSet rs = null;
		List<Ch11BoardDataBean> articleList = null;
		try{
			conn = getConnection();
			
//			pstmt = conn.prepareStatement("select * from board order by ref desc, re_step asc limit ?, ?");
//			pstmt.setInt(1, start-1);
//			pstmt.setInt(2, end);
			
/*			pstmt = conn.prepareStatement(
					"SELECT *					 	 "
				  + "FROM( SELECT ROWNUM RNUM		 "
				  + "             , O.* 	 		 "
				  + "		FROM ( SELECT * 		 "
				  + "				FROM BOARD		 "
				  + "				ORDER BY REF DESC"
				  + "  					, RE_STEP ASC"
				  + "  	  		 ) O				 "
				  + "	  )							 "
				  + "WHERE RNUM BETWEEN ? AND ?		 ");
			
			pstmt.setInt(1, start);
			pstmt.setInt(2, start+end-1); */
			
			pstmt = conn.prepareStatement(
					"SELECT *					 	 "
				  + "FROM( SELECT ROWNUM RNUM		 "
				  + "             , O.* 	 		 "
				  + "		FROM ( SELECT * 		 "
				  + "				FROM BOARD		 "
				  + "				ORDER BY REF DESC"
				  + "  					, RE_STEP ASC"
				  + "  	  		 ) O				 "
				  + "	  )							 "
				  + "WHERE RUM 	  >= ?				 "
				  + "AND   ROWNUM <= ?				 ");
			
			pstmt.setInt(1, start);
			pstmt.setInt(2, end);
			
			rs = pstmt.executeQuery();
			
			if( rs.next()) {
				articleList = new ArrayList<Ch11BoardDataBean> (end);
				do{
					Ch11BoardDataBean article = new Ch11BoardDataBean();
				article.setNum(rs.getInt("num"));
				article.setWriter(rs.getString("writer"));
				article.setEmail(rs.getString("email"));
				article.setSubject(rs.getString("subject"));
				article.setPasswd(rs.getString("passwd"));
				article.setReg_date(rs.getTimestamp("reg_date"));
				article.setReadcount(rs.getInt("readcount"));
				article.setRef(rs.getInt("ref"));
				article.setRe_step(rs.getInt("re_step"));
				article.setRe_level(rs.getInt("rs_level"));
				article.setContent(rs.getString("content"));
				article.setIp(rs.getString("ip"));
				articleList.add(article);	
				}while(rs.next());
			}
		}catch(Exception ex){
			ex.printStackTrace();
		}finally {
			if( rs != null) try{ rs.close(); } catch(SQLException ex) {}
			if( pstmt != null) try{ pstmt.close(); } catch(SQLException ex) {}
			if( conn != null) try{ conn.close(); } catch(SQLException ex) {}
		}
	return articleList;
	}

	//글의 내용을 보기(1개의 글) (select문)<=content.jsp페이지에서 사용
	public Ch11BoardDataBean getArticle(int num) throws Exception {
		Connection conn = null; 
		PreparedStatement pstmt = null;
		PreparedStatement pstmt2 = null;
		ResultSet rs = null;
		Ch11BoardDataBean article = null;
		try{
			conn = getConnection();
			
			pstmt = conn.prepareStatement("update board set readcount = readcount+1 where num = ?");
		pstmt.setInt(1, num);
		pstmt.executeUpdate();
		
			pstmt2 = conn.prepareStatement("select * from board where num = ?");
			pstmt2.setInt(1, num);
			rs = pstmt2.executeQuery();
		
			if(rs.next()){
				article = new Ch11BoardDataBean();
				article.setNum(rs.getInt("num"));
				article.setWriter(rs.getString("writer"));
				article.setEmail(rs.getString("email"));
				article.setSubject(rs.getString("subject"));
				article.setPasswd(rs.getString("passwd"));
				article.setReg_date(rs.getTimestamp("reg_date"));
				article.setReadcount(rs.getInt("readcount"));
				article.setRef(rs.getInt("ref"));
				article.setRe_step(rs.getInt("re_step"));
				article.setRe_level(rs.getInt("rs_level"));
				article.setContent(rs.getString("content"));
				article.setIp(rs.getString("ip"));
			}
		}catch(Exception ex){
			ex.printStackTrace();
		} finally {
			if( rs != null) try{ rs.close(); } catch(SQLException ex) {}
			if( pstmt != null) try{ pstmt.close(); } catch(SQLException ex) {}
			if( pstmt2 != null)try{ pstmt2.close();} catch(SQLException ex) {}
			if( conn != null) try{ conn.close(); } catch(SQLException ex) {}
		}
		return article;
	}
	
	//글 수정폼에서 사용할 글의 내용(1개의 글) (select문) <=updateForm.jsp에서 사용
	public Ch11BoardDataBean updateGetArticle(int num) throws Exception {
		Connection conn = null; 
		PreparedStatement pstmt = null;
		ResultSet rs = null;
		Ch11BoardDataBean article = null;
		try{
			conn = getConnection();
			
			pstmt = conn.prepareStatement("select * from board where num =?");
			pstmt.setInt(1, num);
			rs = pstmt.executeQuery();
			if(rs.next()){
				article = new Ch11BoardDataBean();
				article.setNum(rs.getInt("num"));
				article.setWriter(rs.getString("writer"));
				article.setEmail(rs.getString("email"));
				article.setSubject(rs.getString("subject"));
				article.setPasswd(rs.getString("passwd"));
				article.setReg_date(rs.getTimestamp("reg_date"));
				article.setReadcount(rs.getInt("readcount"));
				article.setRef(rs.getInt("ref"));
				article.setRe_step(rs.getInt("re_step"));
				article.setRe_level(rs.getInt("rs_level"));
				article.setContent(rs.getString("content"));
				article.setIp(rs.getString("ip"));
			}
				}catch(Exception ex){
					ex.printStackTrace();
				} finally {
					if( rs != null) try{ rs.close(); } catch(SQLException ex) {}
					if( pstmt != null) try{ pstmt.close(); } catch(SQLException ex) {}
					if( conn != null) try{ conn.close(); } catch(SQLException ex) {}
				}
		return article;
	}
	
	//글 수정처리에서 사용(update문)<=updatePro.jsp에서 사용
	public int updateArticle(Ch11BoardDataBean article) throws Exception{
		Connection conn = null; 
		PreparedStatement pstmt = null;
		PreparedStatement pstmt2 = null;
		ResultSet rs = null;
		
		String dbpasswd="";
		String sql="";
		int x= -1;
		try{
			conn = getConnection();
			
			pstmt = conn.prepareStatement("select passwd from board where num = ?");
			pstmt.setInt(1, article.getNum());
			rs = pstmt.executeQuery();
			
		if(rs.next()){
			dbpasswd = rs.getString("passwd");
			if(dbpasswd.equals(article.getPasswd())){
				sql = "update board set writer=?,email=?,subject=?,passwd=?";
				sql+= ",content=? where num=?";
				pstmt2 = conn.prepareStatement(sql);
				
				pstmt2.setString(1, article.getWriter());
				pstmt2.setString(2, article.getEmail());
				pstmt2.setString(3, article.getSubject());
				pstmt2.setString(4, article.getPasswd());
				pstmt2.setString(5, article.getContent());
				pstmt2.setInt(6, article.getNum());
				pstmt2.executeUpdate();
			}
			
		}
		
	}catch(Exception ex){
		ex.printStackTrace();
	} finally {
		if( rs != null) try{ rs.close(); } catch(SQLException ex) {}
		if( pstmt != null) try{ pstmt.close(); } catch(SQLException ex) {}
		if( conn != null) try{ conn.close(); } catch(SQLException ex) {}
	}
return x;
	}
	
	//글 삭제처리시 사용(delete문)<=deletePro.jsp페이지에서 사용
	public int deleteArticle(int num, String passwd) throws Exception{
		Connection conn = null; 
		PreparedStatement pstmt = null;
		PreparedStatement pstmt2 = null;
		ResultSet rs = null;
		
		String dbpasswd="";
		int x= -1;
		try{
			conn = getConnection();
			
			pstmt = conn.prepareStatement("select passwd from board where num = ?");
			pstmt.setInt(1, num);
			rs = pstmt.executeQuery();
			
			if(rs.next()){
				dbpasswd=rs.getString(passwd);
				if(dbpasswd.equals(passwd)){
					pstmt2 = conn.prepareStatement("delete from board where num=?");
					pstmt2.setInt(1, num);
					pstmt2.executeUpdate();
				x = 1; //글삭제 성공
				}else
					x = 0; //비밀번호 틀림
			}
		
		}catch(Exception ex){
			ex.printStackTrace();
		} finally {
			if( rs != null) try{ rs.close(); } catch(SQLException ex) {}
			if( pstmt != null) try{ pstmt.close(); } catch(SQLException ex) {}
			if( pstmt2 != null)try{ pstmt2.close();} catch(SQLException ex) {}
			if( conn != null) try{ conn.close(); } catch(SQLException ex) {}
		}
		return x;
	}
}
