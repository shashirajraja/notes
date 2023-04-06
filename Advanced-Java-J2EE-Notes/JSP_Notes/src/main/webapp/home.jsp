<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8" import="java.util.*,java.io.*" errorPage="error.jsp"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Home Page</title>
<link rel="stylesheet"
	href="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css">
</head>
<body>


	<div class="text-center" >
		<label class="text-secondary font-weight-bold mt-4" style="border:2px solid red;"> 
		Welcome to User Home<br> <br> Good to See you Logged In!!
		</label>
	</div>
	
	<% String pagename = request.getParameter("pagename"); %>
	<%= pagename == null ? "" : "Forwarded From: " + pagename %>

	<br/>
</body>
</html>