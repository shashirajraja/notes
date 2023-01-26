package com.dayseven.cookie;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.util.DBUtil;

public class LoginWithCookie extends HttpServlet{

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
		res.setContentType("text/html");
		String email = req.getParameter("email");
		String password = req.getParameter("pwd");
		
		//Hidden forms Data
		String forwardedFrom = req.getParameter("forwardedFrom");
		System.out.println("Forwared From File: "+ forwardedFrom);
		
		boolean isLoginSuccess = validateCredentials(email, password);
		PrintWriter pw = res.getWriter();
		if(isLoginSuccess) {
			
			//Addign cooking to the response
			Cookie cookie = new Cookie("email", email);
			
			cookie.setMaxAge(100); // maximum age of cookie in seconds
			res.addCookie(cookie);
			
			req.getRequestDispatcher("index.html").include(req, res);
			pw.println("Login Success");
			
			
		} else {
			req.getRequestDispatcher("login-cookie.html").include(req, res);
			pw.println("Invalid Creds, Please Try Again!!");
		}
		
	}
	
	public Boolean validateCredentials(String email, String password) {
		Connection connection = DBUtil.getConnection();
		boolean isLoginSuccess = false;
		String sqlQuery = "select * from customer where email = ? and password = ?";
		try {
			PreparedStatement ps = connection.prepareStatement(sqlQuery);
			
			ps.setString(1, email);
			ps.setString(2, password);
			
			ResultSet rs = ps.executeQuery();
			
			if(rs.next()) {
				isLoginSuccess = true;
				
			} else {
				isLoginSuccess = false;
			}
			
		} catch (SQLException e) {
			isLoginSuccess = false;
			e.printStackTrace();
		}
		
		return isLoginSuccess;
	}
}