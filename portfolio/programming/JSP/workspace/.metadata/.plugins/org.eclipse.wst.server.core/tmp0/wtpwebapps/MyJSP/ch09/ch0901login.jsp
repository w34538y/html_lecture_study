<%@ page contentType="text/html; charset=UTF-8" %>
<jsp:useBean id="login" class="ch09.Ch0901LoginBean" scope="page"/> <!-- 1. IMPORT(비슷한거) -->
<!-- ch09.Ch0901LoginBean login = new ch09.Ch0901LoginBean(); --> <!-- 2. 객체생성 -->
<!--  -->
<jsp:setProperty name="login" property="*" /> <!--3. SET / 알아서 모두 SET해줌. 대신 form과 bean에서 같은 이름을 사용해야됨 -->

<!-- 
<jsp:setProperty name="login" property="userid" param="userid"/>  <!-- 3. SET / property에는 멤버변수이름이 아님. SET이름임. GETSET과 동일-->

<!-- login.setUserid(request.getParameter("userid")); --> <!-- 3. SET / param="userid" = request.getParameter("userid") -->
<!-- 
<jsp:setProperty name="login" property="passwd" param="passwd"/>
-->

<html>
<head>
<title>ch09 : login.jsp</title>
</head>
<body>
<div align=center>
<h2>로그인 예제</h2>
<hr>
<%
	if(!login.checkUser()){
		out.println("로그인 실패!");
	}
	else{
		out.println("로그인 성공!");
	}
%>

<hr>
사용자 아이디:   <jsp:getProperty name="login" property="userid" /> <br>
<!-- login.getUserid(); -->
사용자 패스워드: <jsp:getProperty name="login" property="passwd" />

</div>
</body>
</html>