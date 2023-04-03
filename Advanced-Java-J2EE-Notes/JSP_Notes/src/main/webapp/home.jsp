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


	<div class="text-center">
		<label class="text-secondary font-weight-bold mt-4"> 
		Welcome to User Home<br> <br> Good to See you Logged In!!
		</label>
	</div>

	<div>
		<h3>Scripting Tag</h3>
		<p>Scripting tag is of three types:</p>
		<ol>
			<li>
				<h5>Scriptlet Tag</h5>
				<p>
					This is used to write any Java Code in JSP using: 
					<span style="color: red;">&lt;% ...any java code... %&gt;</span><br />
					<%
					out.println("This is printed using the scriptlet tag");
					%>
				</p>
			</li>
			<li>
				<h5>Expression Tag</h5>
				<p>
					This is used to read any variable or functions return value, 
						or to execute any expression and show result  
					<span style="color: red;">&lt;%= ...expressions... %&gt;</span><br />
					Eg: The Sum of 5 and 2 is  <%= (5+2)%>
				</p>

			</li>

			<li>
			<h5>Declaration Tag</h5>
				<p>
					This is used to Declare any java variable or function: 
					<span style="color: red;">&lt;%! ...any java code... %&gt;</span><br />
					<%! 
						String currentTag = "DeclerationTag";
					
						public String getMessage() throws IOException{
							throw new IOException();
							//return "I am learning about: " + currentTag;
						}
					%>
					
					<!-- Using the expression tag to read the declared variables or functions return value -->
					<%= currentTag %>
				</p>
			</li>
		</ol>
	</div>
	<br/>
</body>
</html>