package com.daytwo;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import javax.servlet.GenericServlet;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;

import com.daytwo.bean.Customer;
import com.util.DBUtil;

public class LoginServletGetParamsUsingBeans extends GenericServlet {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {

		res.setContentType("text/html");
		PrintWriter pw = res.getWriter();
		Customer customer = new Customer();
		// req.getParameter
		String email = req.getParameter("email");
		String password = req.getParameter("pwd");
		customer.setEmail(email);
		customer.setPwd(password);

		pw.println("Hello " + email + ", wait while we are checking your credentials..<br>");

		boolean isLoginSuccess = false;
		// isLoginSuccess = email.equals("shashi@gmail.com") &&
		// password.equals("shashi");

		Connection connection = DBUtil.getConnection();
		if (connection == null) {
			pw.println("<br>Server is down, try after some time!!");
			return;
		}

		String sqlQueryToCheckIfCustomerExistsWithReceivedEmailAndPassword = "select * from customer where email = ? and password = ?";
		try {
			PreparedStatement ps = connection
					.prepareStatement(sqlQueryToCheckIfCustomerExistsWithReceivedEmailAndPassword);

			ps.setString(1, customer.getEmail());
			ps.setString(2, customer.getPwd());

			ResultSet rs = ps.executeQuery();

			if (rs.next()) {
				isLoginSuccess = true;

				String id = rs.getString("id");
				String name = rs.getString("name");
				String dob = rs.getString("dob");
				email = rs.getString("email");
				String mob = rs.getString("mob");
				String gender = rs.getString("gender");
				customer.setId(id);
				customer.setEmail(email);
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

			//
		} else {
			// login failure
			pw.println("<h2>Invalid Credentials, Try Again!!");
			// include the error in same page and show the login form again
		}

	}

}
