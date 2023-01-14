package com.daythree;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.GenericServlet;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;

public class DemoServletContext extends GenericServlet{

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	
	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		
		ServletContext servletContext= req.getServletContext();
		
		String clientName = servletContext.getInitParameter("clientName");
		
		res.setContentType("text/html");
		PrintWriter pw = res.getWriter();
		pw.println("Welcome "+ clientName);
	}

}
