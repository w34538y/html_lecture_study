<%@ page language="java" contentType="text/html; charset=UTF-8"
   pageEncoding="UTF-8"%>
 <%@ page errorPage="ch0701error.jsp" %>

<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>ch07 : Error Test</title>
</head>
<body>
	<H2>Error 테스트 페이지</H2>
	<%
		String str = "test";
		int i = Integer.parseInt(str);
	%>

</body>
</html>