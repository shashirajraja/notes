package com.dayseven.cookie;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

public class UserHomeWithCookie extends HttpServlet{

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html");
		boolean isLoggedIn = false;
		
		Cookie[] cookies = req.getCookies();
		for(Cookie cookie : cookies) {
			System.out.println(cookie.getName()+ " : "+cookie.getValue()+"\n");
			if(cookie.getName().equalsIgnoreCase("email")) {
				isLoggedIn = true;
				break;
			}
		}
		
		PrintWriter pw = resp.getWriter();
		if(!isLoggedIn) {
			//if not logged in customer
			//ask them to login first and come back
			req.getRequestDispatcher("index.html").include(req, resp);
			pw.println("Login First to continue!");
			return;
		} 
		
		//otherwise continue with the task
		req.getRequestDispatcher("index.html").include(req, resp);
		pw.println("Hey, Great to see you logged in!!");
		
	}

}
