<%@ page language="java" contentType="text/html; charset=UTF-8"
   pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>ch06 : include action 테스트</title>
</head>
<body>
<h2> include_action.jsp에서 footer.jsp 호출</h2>
<hr>
include_action.jsp 에서 출력한 메시지입니다. <br>

<% request.setAttribute("name", "신우진"); %>
<jsp:include page="ch0601footer.jsp">
	<jsp:param name="email" value="test@test.net" />
	<jsp:param name="tel" value="000-0000-0000"/>
</jsp:include>
<br>
footer.jsp에서 복귀 후 출력한 메세지입니다.
</body>
</html>