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
	Cookie cookie = new Cookie("cookieN", "cookieV");
	cookie.setMaxAge(60*60); //1시간(초단위*초단위)
	response.addCookie(cookie);
	%>
	쿠키생성("cookieN", "cookieV")
	<br><br>
	<a href="ch0801cookieget.jsp">cookie get</a>

</body>
</html>