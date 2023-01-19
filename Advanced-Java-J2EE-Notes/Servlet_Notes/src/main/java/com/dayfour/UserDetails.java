package com.dayfour;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.GenericServlet;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;

public class UserDetails extends GenericServlet{

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		
		res.setContentType("text/html");
		PrintWriter pw = res.getWriter();
		
		//Access the attribute variable from servlet context
		ServletContext servletContext = req.getServletContext();
		String email = (String) servletContext.getAttribute("myEmail");
		
		//email = req.getServletContext().getAttribute("myEmail");
		
		RequestDispatcher rd = req.getRequestDispatcher("index.html");
		rd.include(req, res);
		
		if(email == null) {
			pw.print("Please Login First to continue!!<br>");						
		} else {
			pw.println("Hi, "+ email);
			pw.print("Logged In!!, Welcome to UserDetails Page!!<br>");			
		}

	
	}

}
