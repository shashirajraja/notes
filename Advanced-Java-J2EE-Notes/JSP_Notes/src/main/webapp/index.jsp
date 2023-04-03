<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Home Page</title>
<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css" >
</head>
<body>

<%@ include file="header.jsp"  %>
<!-- Welcome to Home Page Of JSP -->
<!-- <br><hr/> -->

<%@taglib uri="http://java.sun.com/jsp/jstl/core" prefix="x"%>

<%-- <%
	boolean isLoggedIn = false;
	pageContext.setAttribute("isLoggedIn", isLoggedIn);
%> --%>

<x:choose>
	<x:when test="${isLoggedIn}">
		<%@ include file="home.jsp" %>
	</x:when>
	<x:otherwise>
		<div class="text-center">
			<label class="text-warning font-weight-bold mt-1">Login First To Continue!!</label>
		</div>
		<%@ include file="loginForm.jsp" %>
	</x:otherwise>
</x:choose>



<%-- <x:if test="${isLoggedIn}">
	<%@ include file="home.jsp" %>
</x:if>
<x:if test="${!isLoggedIn}">
	<%@ include file="loginForm.jsp" %>
</x:if>
 --%>
 
<%@ include file="footer.jsp"  %>
</body>
</html>