package com.daytwo;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import javax.servlet.GenericServlet;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;

import com.util.DBUtil;

public class LoginServletGetParams extends GenericServlet{

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		
		res.setContentType("text/html");
		PrintWriter pw = res.getWriter();		
		
		//req.getParameter
		String email = req.getParameter("email");
		String password = req.getParameter("pwd");
		
		pw.println("Hello "+email +", wait while we are checking your credentials..<br>");

		boolean isLoginSuccess = false;
		//isLoginSuccess = email.equals("shashi@gmail.com") && password.equals("shashi");
		
		Connection connection = DBUtil.getConnection();
		if(connection == null) {
			pw.println("<br>Server is down, try after some time!!");
			return;
		} 
		
		String sqlQueryToCheckIfCustomerExistsWithReceivedEmailAndPassword = "select * from customer where email = ? and password = ?";
		try {
			PreparedStatement ps = connection.prepareStatement(sqlQueryToCheckIfCustomerExistsWithReceivedEmailAndPassword);
			
			ps.setString(1, email);
			ps.setString(2, password);
			
			ResultSet rs = ps.executeQuery();
			
			if(rs.next()) {
				isLoginSuccess = true;
				
				String id = rs.getString("id");
				String name = rs.getString("name");
				String dob = rs.getString("dob");
				email = rs.getString("email");
				String mob = rs.getString("mob");
				String gender = rs.getString("gender");
				
				pw.println("<ul>"
						+ "<li>Name: "+name+"</li>"
						+ "<li>Id: "+id+"</li>"
						+ "<li>Email: "+email+"</li>"
						+ "<li>DOB: "+dob+"</li>"
						+ "<li>Mob: "+mob+"</li>"
					    + "<li>Gender: "+gender+"</li>"
						+ "</ul>");
				
			} else {
				isLoginSuccess = false;
			}
			
		} catch (SQLException e) {
			isLoginSuccess = false;
			e.printStackTrace();
		}
		
		
		
		
		if(isLoginSuccess) {
			//login success
			pw.println("<h1>User Login Success</h1>");
			
			
			//Setting the attribute to ServletRequest can only be accessible to next servlets
			req.setAttribute("myEmail", email);
			
			ServletContext sc = req.getServletContext();
			sc.setAttribute("myEmail", email);
			
			//Request Dispatcher
			RequestDispatcher rd = req.getRequestDispatcher("/user");
			
			rd.forward(req, res);
		} else {
			//login failure
			pw.println("<h2>Invalid Credentials, Try Again!!<br>");
			
			//Request Dispatcher
			RequestDispatcher rd = req.getRequestDispatcher("login.html");
			
			rd.include(req, res);
		}
		
	}

}

