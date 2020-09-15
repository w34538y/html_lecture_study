package ch04;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class Ch0401first
 */
@WebServlet("/Ch0401first")
public class Ch0401first extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
//		response.getWriter().append("Served at: ").append(request.getContextPath());
		// 컨텐츠 타입 선언 및 한글 설정 
		response.setContentType("text/html;charset=UTF-8");
		// 웹브라우저 출력을 위한 PrintWritter 객체 확보
		PrintWriter out = response.getWriter();
		
		String bookTitle = "JSP 프로그래밍";
		String author = "홍길동";
		
		out.println("<!DOCTYPE html>");
		out.println("<HTML>");
		out.println("<HEAD><meta charset=\"UTF-8\"><TITLE>HTML 문서의 제목Servlet</TITLE></HEAD>");
		out.println("<BODY><b>"+ bookTitle + "</b>("+ author + ")입니다.</BODY>");
		out.println("</HTML>");
	}
}
	