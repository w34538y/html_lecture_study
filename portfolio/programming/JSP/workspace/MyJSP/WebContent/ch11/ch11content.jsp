<%@ page language="java" contentType="text/html; charset=UTF-8"
   pageEncoding="UTF-8"%>
<%@ page import = "ch11.Ch11BoardDBBean" %>
<%@ page import = "ch11.Ch11BoardDataBean" %>
<%@ page import = "java.text.SimpleDateFormat" %>
<%@ include file= "ch11color.jspf" %>

<html>
<head>
<meta charset="UTF-8">
<title>게시판</title>
<link href="ch11style.css" rel="stylesheet" type="text/css">
</head>
<body bgcolor="<%=bodyback_c%>">
<%
	int num = Integer.parseInt(request.getParameter("num"));
	String pageNum = request.getParameter("pageNum");
	
	SimpleDateFormat sdf = new SimpleDateFormat("yyyy-mm-dd HH:mm");
	try{
		Ch11BoardDBBean dbPro = Ch11BoardDBBean.getInstance();
		Ch11BoardDataBean article = dbPro.getArticle(num);
		
		int ref=article.getRef();
		int re_step=article.getRe_step();
		int re_level=article.getRe_level();
%>

<p> 글내용보기</p>

<form>
<table>
	<tr height="30">
		<td align="center" width="125" bgcolor="<%=value_c%>">글번호</td>
		<td align="center" width="125" align="center">
			<%=article.getNum()%></td>
		<td align="center" width="125" bgcolor="<%=value_c%>">조회수</td>
		<td align="center" width="125" align="center">
			<%=article.getReadcount()%></td>
	</tr>
	<tr height="30">
		<td align="center" width="125" bgcolor="<%=value_c%>">작성자</td>
		<td align="center" width="125" align="center">
			<%=article.getWriter()%></td>
		<td align="center" width="125" bgcolor="<%=value_c%>">작성일</td>
		<td align="center" width="125" align="center">
			<%=sdf.format(article.getReg_date())%></td>
	</tr>
	<tr height="30">
		<td align="center" width="125" bgcolor="<%=value_c%>">글제목</td>
		<td align="center" width="375" align="center" colspan="3">
			<%=article.getSubject()%></td>
	</tr>
	<tr height="30">
		<td align="center" width="125" bgcolor="<%=value_c%>">글내용</td>
		<td align="left" width="375" align="center" colspan="3">
			<pre><%=article.getContent()%></pre></td>
	</tr>
	<tr height="30">
		<td colspan="4" bgcolor="<%=value_c %>" align="right">
		<input type="button" value="글수정"
		onclick="document.location.href='ch11updateForm.jsp?num=<%=article.getNum() %>&pageNum
		<%=pageNum%>'">
		&nbsp;&nbsp;&nbsp;&nbsp;
		<input type="button" value="글삭제"
		onclick="document.location.href='ch11deleteForm.jsp?num=<%=article.getNum() %>&pageNum
		<%=pageNum%>'">
		&nbsp;&nbsp;&nbsp;&nbsp;
		<input type="button" value="답글쓰기"
		onclick="document.location.href='ch11writeform.jsp?num<%=num %>&ref=<%=ref %>&re_step=<%=re_step %>&re_level=<%=re_level %>'">
		&nbsp;&nbsp;&nbsp;&nbsp;
		<input type="button" value="답글쓰기"
		onclick="document.location.href='ch11list.jsp?pageNum=<%=pageNum %>'">
		</td>
	</tr>
</table>
</form>
<%
 }catch(Exception e){}
 %>
</body>
</html>