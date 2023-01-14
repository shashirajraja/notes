package com.daythree;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.GenericServlet;
import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;

public class DemoServletConfig extends GenericServlet {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {

		ServletConfig servletConfig = this.getServletConfig();

		String refralName = servletConfig.getInitParameter("refralName");

		String clientName = req.getServletContext().getInitParameter("clientName");

		res.setContentType("text/html");
		PrintWriter pw = res.getWriter();
		pw.println("Welcome " + refralName);
		pw.println("<br>Client: " + clientName);
	}

}
