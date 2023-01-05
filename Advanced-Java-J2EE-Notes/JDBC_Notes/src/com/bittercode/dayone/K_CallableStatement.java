package com.bittercode.dayone;

import java.sql.CallableStatement;
import java.sql.Connection; //STEP-0: update the module-info.java with "requires java.sql;"
import java.sql.DriverManager;
import java.sql.SQLException;

public class K_CallableStatement { // See Step-4

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
			 * PreparedStatement ps =
			 * connection.prepareStatement("INSERT into bank values(?,?,?)");
			 * 
			 * 3) CallableStatement: (Extends PreparedStatement.) Used to execute stored
			 * procedures that may contain both input and output parameters.
			 * 
			 * CallableStatement cs =
			 * connection.prepareCall("{call CREATE_ACCOUNT(?,?,?)}");
			 * 
			 */

			// Example for Callable Statement
			/*
			 * CREATE OR REPLACE PROCEDURE CREATE_ACCOUNT (id number, name varchar2, email
			 * varchar2, mob number, gender varchar2, dob varchar2 , password varchar2
			 * ,accno number, balance number, type varchar2) IS
			 * 
			 * BEGIN INSERT INTO CUSTOMER VALUES(id, name, email, mob, gender, dob,
			 * password); INSERT INTO BANK VALUES(accno, balance, type); END;
			 */
			CallableStatement cs = connection.prepareCall("{call CREATE_ACCOUNT(?,?,?,?,?,?,?,?,?,?)}");
			cs.setString(1, "34567");
			cs.setString(2, "shashi");
			cs.setString(3, "shashi23@gmail.com");
			cs.setString(4, "345673456");
			cs.setString(5, "M");
			cs.setString(6, "10-12-22");
			cs.setString(7, "passwordlkdssf");
			cs.setString(8, "123456789");
			cs.setString(9, "10000");
			cs.setString(10, "SAVING");

			cs.execute();
			System.out.println("Execution success");
			// STEP-6: Close the connection after use
			connection.close();

		} catch (SQLException e) {
			System.out.println("Execution Failed: " + e.getMessage());
		} catch (ClassNotFoundException e) {
			System.out.println("Connection Failed, Failed to Load the Driver: " + e.getMessage());
		}

	}

}
