<%@page import="com.shashi.bean.UserBean"%>
<%@page
	import="org.apache.taglibs.standard.lang.jstl.test.PageContextImpl"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8" isErrorPage="false"%>
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

	<%@taglib uri="http://java.sun.com/jsp/jstl/core" prefix="x"%>
	<x:if test="${!isLoggedIn}">
		<jsp:forward page="login.jsp"></jsp:forward>
	</x:if>

	<div class="text-center">
		<label class="text-secondary font-weight-bold mt-4"> Learn
			About JSP Tags </label>
	</div>

	<div>
		<h3>Scripting Tag</h3>
		<p>Scripting tag is of three types:</p>
		<ol>
			<li>
				<h5>Scriptlet Tag</h5>
				<p>
					This is used to write any Java Code in JSP using: <span
						style="color: red;">&lt;% ...any java code... %&gt;</span><br />
					<%
					out.println("This is printed using the scriptlet tag");
					%>
				</p>
			</li>
			<li>
				<h5>Expression Tag</h5>
				<p>
					This is used to read any variable or functions return value, or to
					execute any expression and show result <span style="color: red;">&lt;%=
						...expressions... %&gt;</span><br /> Eg: The Sum of 5 and 2 is
					<%=(5 + 2)%>
				</p>

			</li>

			<li>
				<h5>Declaration Tag</h5>
				<p>
					This is used to Declare any java variable or function: <span
						style="color: red;">&lt;%! ...any java code... %&gt;</span><br />
					<%!String currentTag = "DeclerationTag";

	public String getMessage() {
		return "I am learning about: " + currentTag;
	}%>

					<!-- Using the expression tag to read the declared variables or functions return value -->
					<%=getMessage()%>
				</p>
			</li>
		</ol>
	</div>

	<h3>Implicit Objects in JSP</h3>
	<div>
		ServletConfig in servlet is available in JSP as => config <br />
		CourseName:
		<%=config.getInitParameter("chapterName")%>
	</div>

	<div>
		ServletContext => application<br /> ReadContextInitParam:
		<%=application.getInitParameter("applicationName")%>
	</div>

	<div>
		HttpSession => session<br /> Session Details, Name:
		<%=(String) session.getAttribute("name")%>
	</div>

	<div>
		=> pageContext : page scope is the default if we don't mention it<br />
		PageContext Details, Name:
		<%=pageContext.getAttribute("name", PageContext.SESSION_SCOPE)%>
		PageContext Details, something:
		<%=pageContext.getAttribute("someting", PageContext.APPLICATION_SCOPE)%>
		PageContext Details, Name:
		<%=pageContext.getAttribute("name", PageContext.SESSION_SCOPE)%>
		PageContext Details, Name:
		<%=pageContext.getAttribute("name", PageContext.SESSION_SCOPE)%>
		<%
		pageContext.setAttribute("abc", "value", PageContext.SESSION_SCOPE);
		%>
	</div>
	
	<%! String homePageUrl = "home.jsp"; %>

	<h3>Action Tags</h3>
	<ol>
		<li>
			<h5>Include Tag</h5>
			<p>
				<%-- <%@ include file="home.jsp"%> --%>
				<jsp:include page="home.jsp"></jsp:include>
				<jsp:include page="home.jsp"></jsp:include>
				<jsp:include page="<%=homePageUrl %>"></jsp:include>
			</p>
		</li>
		<li>
			<%-- <h5>Forward Tag</h5>
			<p>
				<%response.sendRedirect("home.jsp"); %>
				<jsp:forward page="home.jsp">
					<jsp:param value="coursespage" name="pagename"/>
					<jsp:param value="value" name="varname"/>
				</jsp:forward>
			</p> --%>
		</li>
		
		<li>
			<h5>useBean Tag</h5>
			<p>
			<jsp:useBean id="user" class="com.shashi.bean.UserBean"></jsp:useBean>
			<%-- <% UserBean user = new UserBean(); %> --%>
			
			
			<jsp:setProperty name="user" property="email" value="abc@gmail.com"></jsp:setProperty>
			<%-- <% user.setEmail("abc@gmail.com"); %> --%>
			
			
			<jsp:getProperty name="user" property="email" />
			<%-- <%= user.getEmail() %> --%>
			
			</p>
		</li>
	</ol>

	<br />
	<br />
	<br>
	<br />
	<%@ include file="footer.jsp"%>
</body>
</html>