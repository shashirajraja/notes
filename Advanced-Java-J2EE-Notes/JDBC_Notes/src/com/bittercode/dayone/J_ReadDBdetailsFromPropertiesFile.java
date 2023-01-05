package com.bittercode.dayone;

import java.io.FileInputStream;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.PropertyResourceBundle;
import java.util.ResourceBundle;

public class J_ReadDBdetailsFromPropertiesFile {

	public static void main(String[] args) {
		// STEP-1: Create a application.properties file
		/*
		 * src -> right click-> new -> file -> enter file name: application.properties
		 * -> ok add the db details into the file as below: username=system
		 * password=root driverName = java.sql.Driver
		 * connectionString=jdbc:oracle:thin:@localhost:1521:orcl
		 * 
		 */

		try {
			// Read the application.properties file using FileInputStream
			FileInputStream fis = new FileInputStream("src/application.properties");
			ResourceBundle rb = new PropertyResourceBundle(fis);
			
			//Now we can read the values of properties saved in the file
			// Pass the key name to get the values 
			String driverName = rb.getString("driverName");
			String username = rb.getString("username");
			String password = rb.getString("password");
			String oracleConnectionString = rb.getString("connectionString");

			// Load the driver
			Class.forName(driverName);

			// Get the connection
			Connection connection = DriverManager.getConnection(oracleConnectionString, username, password);

			// Prepare Statement
			PreparedStatement ps = connection.prepareStatement("insert into student values(?,?,?,?)");

			// Bind the values
			ps.setString(1, "3459"); // starting from 1 indexed
			ps.setString(2, "Raushan"); // for second ?
			ps.setString(3, "raushan@gmail.com"); // for third questiom mark in the query "?"
			ps.setLong(4, 345678966L); // phone

			// Execute query, we can use method among: execute(), executeUpdate() or
			// executeQuery()
			int result = ps.executeUpdate(); // we can use the respective method as per our requirement as discussed
												// earlier
			if (result > 0) {
				System.out.println("Insertion success");
			} else {
				System.out.println("Failed to insert");
			}

			// Close the connection after use
			connection.close();

		} catch (IOException | ClassNotFoundException | SQLException e) { // handle exception in same catch
			System.out.println("Error while execution: " + e.getMessage());
			e.printStackTrace();
		}

	}

}
