package com.bittercode.util;

import java.io.FileInputStream;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.PropertyResourceBundle;
import java.util.ResourceBundle;

public class DBUtil {

	public static Connection getConnection() {
		// Read the application.properties file using FileInputStream
		Connection connection = null;
		try {
			FileInputStream fis = new FileInputStream("src/application.properties");
			ResourceBundle rb = new PropertyResourceBundle(fis);

			// Now we can read the values of properties saved in the file
			// Pass the key name to get the values
			String driverName = rb.getString("driverName");
			String username = rb.getString("username");
			String password = rb.getString("password");
			String oracleConnectionString = rb.getString("connectionString");

			// Load the driver
			Class.forName(driverName);

			// Get the connection
			connection = DriverManager.getConnection(oracleConnectionString, username, password);
		} catch (SQLException | ClassNotFoundException | IOException e) {
			System.out.println("Error while connecting to DB: " + e.getMessage());
		}

		return connection;
	}
}
