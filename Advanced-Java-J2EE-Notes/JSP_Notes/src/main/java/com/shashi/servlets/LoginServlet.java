package com.shashi.servlets;

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
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.shashi.util.DBUtil;

public class LoginServlet extends HttpServlet {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	@Override
	public void doPost(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {

		res.setContentType("text/html");
		PrintWriter pw = res.getWriter();

		String email = req.getParameter("email");
		String password = req.getParameter("password");

		pw.println("Hello " + email + ", wait while we are checking your credentials..<br>");

		boolean isLoginSuccess = false;

		Connection connection = DBUtil.getConnection();
		if (connection == null) {
			pw.println("<br>Server is down, try after some time!!");
			return;
		}

		String sqlQueryToCheckIfCustomerExistsWithReceivedEmailAndPassword = "select * from customer where email = ? and password = ?";
		try {
			PreparedStatement ps = connection
					.prepareStatement(sqlQueryToCheckIfCustomerExistsWithReceivedEmailAndPassword);

			ps.setString(1, email);
			ps.setString(2, password);

			ResultSet rs = ps.executeQuery();

			if (rs.next()) {
				isLoginSuccess = true;

				String id = rs.getString("id");
				String name = rs.getString("name");
				String dob = rs.getString("dob");
				email = rs.getString("email");
				String mob = rs.getString("mob");
				String gender = rs.getString("gender");

				pw.println("<ul>" + "<li>Name: " + name + "</li>" + "<li>Id: " + id + "</li>" + "<li>Email: " + email
						+ "</li>" + "<li>DOB: " + dob + "</li>" + "<li>Mob: " + mob + "</li>" + "<li>Gender: " + gender
						+ "</li>" + "</ul>");

			} else {
				isLoginSuccess = false;
			}

		} catch (SQLException e) {
			isLoginSuccess = false;
			e.printStackTrace();
		}

		if (isLoginSuccess) {
			// login success
			pw.println("<h1>User Login Success</h1>");

			// Setting the attribute to ServletRequest can only be accessible to next
			// servlets
			req.setAttribute("myEmail", email);

			ServletContext sc = ((GenericServlet) req).getServletContext();
			sc.setAttribute("myEmail", email);

			// Request Dispatcher
			RequestDispatcher rd = req.getRequestDispatcher("index.jsp");

			rd.forward(req, res);
		} else {
			// login failure
			pw.println("<h2>Invalid Credentials, Try Again!!<br>");

			// Request Dispatcher
			RequestDispatcher rd = req.getRequestDispatcher("loginForm.jsp");

			rd.include(req, res);
		}

	}

}
