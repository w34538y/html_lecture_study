<%@ page language="java" contentType="text/html; charset=UTF-8"
   pageEncoding="UTF-8"%>
<%@ include file="ch11color.jspf" %>

<%
	int num = Integer.parseInt(request.getParameter("num"));
	String pageNum = request.getParameter("pageNum");
	
%>

<html>
<head>
<meta charset="UTF-8">
<title>게시판</title>
<link href="ch11style.css" rel="stylesheet" type="text/css">
<script type="text/javascript">
	<!-- -->
	function deleteSave(){
		if(!document.deleteForm.passwd.value){
			alert("비밀번호를 입력하십시오.");
			document.delForm.passwd.focus();
			return false;
		}
	}
	
</script>
</head>
<body bgcolor="<%=bodyback_c%>">
<p>글삭제</p>
<br>
<form method="POST" name="delForm">
	<table>
		<tr height="30">
			<td align=center bgcolor="<%=value_c %>">
			<b>비밀번호를 입력해주세요.</b></td>
		</tr>
		<tr height="30">
			<td align=center>비밀번호:
			<input type="password" name="passwd" size="8" maxlength="12">
			<input type="hidden" name="num" value="<%=num %>"></td>
		</tr>
		<tr height="30">
			<td align=center bgcolor="<%= value_c%>">
			<input type="submit" value="글삭제">
			<input type="button" value="글목록"
			onclick="document.location.href='ch11list.jsp?pageNum=<%=pageNum %>'">
			</td>	
		</tr>
	</table>
</form>
</body>
</html>