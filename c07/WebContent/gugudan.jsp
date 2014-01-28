<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>구구단 JSP</title>
<link rel="stylesheet" href="TimesTable3.css">
</head>
<body>
<h1>구구단 JSP</h1>
<div>
<%
	for (int i = 2; i <= 9; i++) {
%><div><%
		for (int j = 1; j <= 9; j++) {
			out.println(i + " * " + j + " = " + i * j + "<br>");
		}
%></div><%
	}
%>
</div>
</body>
</html>