<%@ page import ="java.util.Enumeration" %>
<%@ page language="java" contentType="text/html; charset=UTF-8"
   pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
<% 
//	Enumeration<String> enumeration = session.getAttributeNames();
//	while(enumeration.hasMoreElement()) {
//		String sName = enumeration.nextElement().toString();
//		String sValue = (String)session.getAttribute(sName);
//		
//		if(sValue.equals("abcde")) session.removeAttribute(sName);
//	}
	
	session.removeAttribute("id");
	
	%>
	
	<a href="ch0812sessiontest.jsp">세션내용 보기</a>

</body>
</html>