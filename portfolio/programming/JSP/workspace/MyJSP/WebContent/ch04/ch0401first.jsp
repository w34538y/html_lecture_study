<%@ page language="java" contentType="text/html; charset=UTF-8"
   pageEncoding="UTF-8"%> <!-- @=page 디렉티브 -->
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>HTML 문서의 제목 </title>
</head>
<body>
<% 
	// <%는 자바 표현식
	String bookTitle = "JSP 프로그래밍";
	String author = "홍길동";
%>
<b> <%= bookTitle %> </b>(<%= author %>)입니다. <!-- =은 sysout과 같음 -->
</body>
</html>