<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8" import="com.shashi.util.*, java.sql.*"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Home Page</title>
<link rel="stylesheet"
	href="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css">
</head>
<body>
	<%@ include file="header.jsp"%>

	<%
		session.removeAttribute("isLoggedIn");
		session.removeAttribute("name");
	%>
	
	<div class="text-center">
		<label class="text-warning mt-5 font-weight-bold mt-1"> Successfully logged Out!!</label>
	</div>
	
	<%@ include file="footer.jsp"%>

</body>
</html>