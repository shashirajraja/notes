package com.bittercode.dayone;

import java.sql.Connection; //STEP-0: update the module-info.java with "requires java.sql;"
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class I_PreparedStatement { //See Step-4

	public static void main(String[] args) {

		// STEP-1: Add Driver in Build Path 
		try {

			// STEP-2: Load the driver
			Class.forName("java.sql.Driver"); // Throws ClassNotFoundException if driver not found
			System.out.println("Driver Loaded Successfully");

			// STEP-2: Get the userName, password and connectionString for the database
			String username = "system";
			String password = "root";
			String connectionString = "jdbc:oracle:thin:@localhost:1521:orcl";
			
			// STEP-3: Get the Connection using the getConnection method of DriverManager
			Connection connection = DriverManager.getConnection(connectionString, username, password);
			
			if (connection != null) {
				System.out.println("Connected to DB successfully!!");
			} else {
				System.out.println("Unable to connect to Database");
				System.exit(1);
			}

			// STEP-4: Creating Statement
			/*
			 * A Statement is an interface that represents a SQL statement. You execute
			 * Statement objects, and they generate ResultSet objects, which is a table of
			 * data representing a database result set. You need a Connection object to
			 * create a Statement object.
			 * 
			 * For example, following code creates a Statement object : statement =
			 * con.createStatement();
			 * 
			 * There are three different kinds of statements:
			 * 
			 * 1) Statement: Used to implement simple SQL statements with no parameters.
			 * 
			 * Statement statement = connection.createStatement();
			 * 
			 * 2) PreparedStatement: (Extends Statement.) Used for preCompiling SQL
			 * statements that might contain input parameters.
			 * 
			 * PreparedStatement ps = connection.prepareStatement("INSERT into bank values(?,?,?)");
			 * 
			 * 3) CallableStatement: (Extends PreparedStatement.) Used to execute stored
			 * procedures that may contain both input and output parameters.
			 * 
			 * CallableStatement cs = connection.prepareCall("{call CREATE_ACCOUNT(?,?,?)}");
			 * 
			 */

			//Example for prepared statement
			PreparedStatement ps = connection.prepareStatement("insert into student values(?,?,?,?)"); 
			
			
			//STEP-5: Bind the respective values for the question mark in the query
			ps.setString(1, "3458"); //starting from 1 indexed
			ps.setString(2, "Ravi"); //for second ?
			ps.setString(3, "ravi@gmail.com"); //for third questiom mark in the query "?"
			ps.setLong(4, 345678976L); //phone
			
			//Execute query, we can use method among: execute(), executeUpdate() or executeQuery()
			int result = ps.executeUpdate(); //we can use the respective method as per our requirement as discussed earlier
			if(result > 0) {
				System.out.println("Insertion success");
			} else {
				System.out.println("Failed to insert");
			}
			// STEP-6: Close the connection after use
			connection.close();

		} catch (SQLException e) {
			System.out.println("Execution Failed: " + e.getMessage());
		} catch (ClassNotFoundException e) {
			System.out.println("Connection Failed, Failed to Load the Driver: " + e.getMessage());
		}

	}

}
