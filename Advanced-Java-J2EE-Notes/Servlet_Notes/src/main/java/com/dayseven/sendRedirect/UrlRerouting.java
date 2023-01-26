package com.dayseven.sendRedirect;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
//first
public class UrlRerouting extends HttpServlet{

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	
	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
		res.setContentType("text/html");
		res.getWriter().print("Hey, i am first!!<br/>");

//		res.sendRedirect("http://localhost:8080/Servlet_Notes/second");
		res.sendRedirect("http://localhost:8080/bittercode/hello");		
//		res.sendRedirect("https://shashirajraja.github.io/text-analyzer/#/");
	}

	

}
