<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8" isErrorPage="true"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Home Page</title>
<link rel="stylesheet"
	href="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css">
</head>
<body>
	
	<%@ include file="header.jsp" %>
	
	<div class="text-center">
		<label class="text-danger font-weight-bold mt-4"> 
		Something Went Wrong, Please Come back!!<br/>
		
		<span class="text-success">Message: <%= exception.getMessage() %> </span>
		</label>
	</div>
	
	

	<%@ include file="footer.jsp" %>

</body>
</html>