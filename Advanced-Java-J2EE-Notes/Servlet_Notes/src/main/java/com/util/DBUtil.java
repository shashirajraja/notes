package com.util;

import java.io.IOException;
import java.io.InputStream;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.Properties;

public class DBUtil {
	
	public static Connection getConnection() {
		// Read the application.properties file using FileInputStream
		Connection connection = null;
		try {
			ClassLoader classLoader = Thread.currentThread().getContextClassLoader();
			InputStream inputStream = classLoader.getResourceAsStream("application.properties");
			Properties props = new Properties();
			props.load(inputStream);
			// Now we can read the values of properties saved in the file
			// Pass the key name to get the values
			String driverName = props.getProperty("driverName");
			String username = props.getProperty("username");
			String password = props.getProperty("password");
			String oracleConnectionString = props.getProperty("connectionString");
			// Load the driver
			Class.forName(driverName);
			// Get the connection
			connection = DriverManager.getConnection(oracleConnectionString, username, password);
		} catch (SQLException | ClassNotFoundException | IOException e) {
			System.out.println("Error while connecting to DB: " + e.getMessage());
			e.printStackTrace();
		}

		return connection;
	}
}
