package com.dayfive;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.GenericServlet;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;

import com.dayfive.model.UserBean;
import com.util.DBUtil;

public class FetchAllUsers extends GenericServlet {

	/**
	 *
	 */
	private static final long serialVersionUID = 1L;

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {

		res.setContentType("text/html");
		PrintWriter pw = res.getWriter();
		RequestDispatcher rd = req.getRequestDispatcher("index.html");
		rd.include(req, res);

		pw.println("<div style='color:red;'>");

		pw.println("Here are the list of all registered Users<br/>");

		List<UserBean> users = this.getUsersData(req, res);
		
		//we can save this users data as attribute in request or servletContext for other places usage
		// req.setAttribute("userData", users);
		
		pw.println("<table style='color:blue; text-align:center'>" + "<thead>"
				+ "<tr><th>ID</th><th>NAME</th><th>GENDER</th><th>EMAIL</th><th>MOB</th><th>DOB</th><th>Password</th></tr>" + "</thead>"
				+ "<tbody>");

		users.forEach(user -> {
			pw.println("<tr><td>" + user.getId() + "</td><td>" + user.getName() + "</td>" + "<td>" + user.getGender()
					+ "</td><td>" + user.getEmail() + "</td><td>" + user.getMob() + "</td>" + "<td>" + user.getDob()
					+ "</td><td>" + user.getPassword() + "</td></tr>");
		});

		pw.println("</tbody></table></div>");

	}

	private List<UserBean> getUsersData(ServletRequest req, ServletResponse res) {

		// to return the list of users
		List<UserBean> users = new ArrayList<>();

		Connection conn = DBUtil.getConnection();
		if (conn == null)
			return users;

		try {
			PreparedStatement ps = conn.prepareStatement("select * from customer");

			ResultSet rs = ps.executeQuery();

			while (rs.next()) {
				UserBean user = new UserBean();
				user.setDob(rs.getString("dob"));
				user.setEmail(rs.getString("email"));
				user.setGender(rs.getString("gender"));
				user.setId(rs.getLong("id"));
				user.setMob(rs.getLong("mob"));
				user.setName(rs.getString("name"));
				user.setPassword(rs.getString("password"));
				users.add(user);
			}

		} catch (SQLException e) {
			e.printStackTrace();
		}
		return users;

	}

}
