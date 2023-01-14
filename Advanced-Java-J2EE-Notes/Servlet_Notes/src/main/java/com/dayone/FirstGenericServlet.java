package com.dayone;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.GenericServlet;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;

public class FirstGenericServlet extends GenericServlet{

	
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	@Override
	public void init() {
		System.out.println("Servlet Program Initiated");
	}


	@Override
	public void destroy() {
		System.out.println("Servlet Program Destroyed");
		
	}
	
	//Service method overriding is compulsory as it is abstract method of the GenericServlet class
	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		System.out.println("Servlet Program Executing..");
		
		res.setContentType("text/html"); //Set the content type of the web page
		PrintWriter pw = res.getWriter(); //Get the pen to write on the web page
		pw.println("Hello Guys!!!"); // prints anything on the web page
		pw.println("<h1>Welcome to Bitter Code");
		pw.println("<a href='index.html'><button>Go Back</button></a>");
		
		req.getParameter("keyName");
	}
}
