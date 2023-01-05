package com.bittercode.dayone;

import java.sql.Connection; //STEP-0: update the module-info.java with "requires java.sql;"
import java.sql.DriverManager;
import java.sql.SQLException;

public class A_JDBCDriverAndConnection {

	public static void main(String[] args) {

		//STEP-1: 
		/*
		 * NOTE: First We need to add the driver in build path before using it, to do so go to
		 * BuildPath -> Configure Build Path -> Libraries -> Add External Jars -> browse to driver location,
		 * select the driver and then OK, apply and close
		 * 
		 * Driver Location for Oracle: c:/oracle.exe/app/oracle/product/10.2.0/server/jdbc/lib/jdbc14.jar
		 * If driver not found, then download jdbc driver and add the jar there
		 */
		try {

			// STEP-2: Load the driver
			Class.forName("java.sql.Driver"); // Throws ClassNotFoundException if driver not found
			/*
			 * Class.forName("java.sql.Driver"); //to use oracle driver
			 * Class.forName("oracle.jdbc.driver.OracleDriver"); //to use oracle driver
			 * Class.forName("com.mysql.jdbc.Driver"); //to use MySQL Driver;
			 * 
			 */
			System.out.println("Driver Loaded Successfully");

			// STEP-2: Get the userName, password and connectionString for the database
			String username = "system";
			String password = "root";
			String connectionString = "jdbc:oracle:thin:@localhost:1521:orcl";
			/*
			 * "jdbc:oracle:thin:@localhost:1521:xe" => Oracle Connection String
			 * "jdbc:oracle:thin:@localhost:1521:orcl" => oracle connection string in case
			 * above doesn't work "jdbc:mysql:localhost:3306/dbName" => MySQL Connection
			 * String
			 */

			// STEP-3: Get the Connection using the getConnection method of DriverManager
			// Class
			Connection connection = DriverManager.getConnection(connectionString, username, password);
			// Throws SQLException if userName, password of connectionString is wrong, or
			// something fails

			if (connection != null) {
				System.out.println("Connected to DB successfully!!");
			} else {
				System.out.println("Unable to connect to Database");
			}

			// STEP-4: Close the connection after use
			connection.close();

		} catch (SQLException e) {
			System.out.println("Connection Failed: " + e.getMessage());
		} catch (ClassNotFoundException e) {
			System.out.println("Connection Failed, Failed to Load the Driver: " + e.getMessage());
		}

	}

}
