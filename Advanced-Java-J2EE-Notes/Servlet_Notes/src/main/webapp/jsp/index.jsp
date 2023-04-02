<!-- Directive Tag with page to add attributes -->
<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8" import="com.util.CommonUtil,com.util.*" %>
	
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>JSP Page</title>
</head>
<body>
	<!-- Directive Tag with include to include files -->
	<%@ include file="header.jsp" %>

	<h1>My First JSP Page</h1>
	<!-- 1: Scriptlet Tag -->
	<!-- We can write any type of java code inside scriptlet tag i.e % % -->
	<%
	
		int x = 10;
		int y = 100;
		out.println("Hello World, Sum = " + (x + y)); //out is an object of printwriter in jsp
	
	%>
	
	<hr/>
	<% 
		
		out.println("The value of x is: " +  x);
	%>
	<hr/>
	<h1>The value of y is <% out.println(y); %> </h1>
	
	<!-- 2: Expression Tag -->
	<h1>The Evaluated value of y is <%=y+100*x%> </h1>
	
	<!-- 3: Decleration Tag -->
	<%! 
		String name ="Shashi"; 
		public String getFullName() {
			return name + " Raj";
		}
	%>
	<hr>
	<h2>My Full Name is <%=getFullName() %></h2>
	
	<%!
	
	public void jspInit() { //Life Cycle Change
		System.out.println("Servlet Program Initiated");
	}
	
	public void jspDestroy() { //Life Cycle Change
		System.out.println("Servlet Program Destroyed");
	}
	
	%>
	
	
	<!-- 
	
		printwriter => out
		HttpServletRequest = > request
		HttpServletResponse => response
		ServletContext => application
		HttpSession => session
		ServletConfig => config
		Throwable => exception
		Object => page
		PageContext => pageContext
	
	 -->
	 <hr>
	Getting message from util: <%=CommonUtil.getMessage() %>
	
	<hr/>
	
	<!-- Directive Tag with include to include files -->
	<%@ include file="footer.jsp" %>
</body>
</html>