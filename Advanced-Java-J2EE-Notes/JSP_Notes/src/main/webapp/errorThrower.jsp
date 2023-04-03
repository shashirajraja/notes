<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8" isErrorPage="true" import="java.io.*" errorPage="error.jsp"%>
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

	<%!
		public String getMessage() throws IOException {
			throw new IOException("Access denied, Please Try after some time!!");
		}
	%>
	
	<%=getMessage() %>

	<%@ include file="footer.jsp"%>

</body>
</html>