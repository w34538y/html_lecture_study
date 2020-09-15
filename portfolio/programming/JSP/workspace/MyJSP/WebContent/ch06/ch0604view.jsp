<%@ page language="java" contentType="text/html; charset=UTF-8"
   pageEncoding="UTF-8"%>
<%
	String code = request.getParameter("code");
	String viewPageURI = null;
	
	if(code.equals("A")){
	viewPageURI = "ch0604a.jsp";
	} else if (code.equals("B")){
	viewPageURI = "ch0604b.jsp";
	} else if (code.equals("C")){
	viewPageURI = "ch0604c.jsp";
	}
	%>
	<jsp:forward page="<%= viewPageURI %>"/>