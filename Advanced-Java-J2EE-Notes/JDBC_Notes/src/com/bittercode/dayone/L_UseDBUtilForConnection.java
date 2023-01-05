package com.bittercode.dayone;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.bittercode.util.DBUtil;

public class L_UseDBUtilForConnection {

	public static void main(String[] args) {

		try {

			// Get the connection
			Connection connection = DBUtil.getConnection();

			if (connection == null) {
				System.out.println("Unable to connect");
				System.exit(1);
			}

			// Prepare Statement
			PreparedStatement ps = connection.prepareStatement("select * from student");

			boolean result = ps.execute();
			if(result) {
				ResultSet rs = ps.getResultSet();
				
				while(rs.next()) {
					System.out.println(rs.getString(1) + " " + rs.getString(2) );
				}
			}

			// Close the connection after use
			connection.close();

		} catch (SQLException e) { // handle exception in same catch
			System.out.println("Error while execution: " + e.getMessage());
			e.printStackTrace();
		}

	}

}
