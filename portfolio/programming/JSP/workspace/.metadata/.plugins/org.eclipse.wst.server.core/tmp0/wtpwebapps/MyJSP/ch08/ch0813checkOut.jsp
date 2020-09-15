<%@ page language="java" contentType="text/html; charset=UTF-8"
   pageEncoding="UTF-8" import="java.util.*"%>
<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>checkOut.jsp</title>
</head>
<body>
<div align="center">
<h2>계산</h2>
선택한 상품 목록
<hr>
<%
	@SuppressWarnings("unchecked")
	ArrayList<String> list = (ArrayList<String>)session.getAttribute("productlist");
	if(list == null){
		out.println("선택한 상품이 없습니다!");
	}
	else {
		for(Object productname:list){
			out.println(productname+"<br>");
		}
	}
	
	//session.invalidate(); //세션이 초기화 되는것 중 하나 
	session.removeAttribute("productlist"); //Attribute만 초기화
%>

</div>
</body>
</html>