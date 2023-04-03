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
	Object isLoggedIn = session.getAttribute("isLoggedIn");
	String signIn = request.getParameter("SignIn");
	boolean showLoginForm = (signIn == null);

	if (isLoggedIn != null && ((boolean) isLoggedIn) == true) {
		String name = (String) session.getAttribute("name");
		out.println("<div class='text-center'><label class='text-success mt-5 font-weight-bold mt-1'>Login Success, Welcome "
		+ name + "</label></div>");
	}

	else if (showLoginForm) {
	%>
	<%@ include file="loginForm.jsp"%>
	<%
	}

	else { //Process the submitted form

	String email = request.getParameter("email");
	String password = request.getParameter("password");

	Connection conn = DBUtil.getConnection();

	PreparedStatement ps = conn.prepareStatement("select * from customer where email = ? and password = ?");

	ps.setString(1, email);
	ps.setString(2, password);

	ResultSet rs = ps.executeQuery();

	if (rs.next()) {

		String id = rs.getString("id");
		String name = rs.getString("name");
		String dob = rs.getString("dob");
		email = rs.getString("email");
		String mob = rs.getString("mob");
		String gender = rs.getString("gender");
		
		//Set the attributes in the session
		session.setAttribute("isLoggedIn", true);
		session.setAttribute("name", name);
		
		response.sendRedirect("index.jsp");
	} else {
		session.setAttribute("isLoggedIn", false);
	%>
	<div class="text-center">
		<label class="text-danger font-weight-bold mt-1">
		Invalid Credentials, Try Again!!</label>
	</div>
	<%@ include file="loginForm.jsp"%>
	<%
	}
	}
	%>

	<%@ include file="footer.jsp"%>

</body>
</html>