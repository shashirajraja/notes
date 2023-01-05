package com.bittercode.dayone;

import java.sql.Connection; //STEP-0: update the module-info.java with "requires java.sql;"
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class C_ExecutingQueries { //See Step-5

	public static void main(String[] args) {

		// STEP-1:
		/*
		 * NOTE: First We need to add the driver in build path before using it, to do so
		 * go to BuildPath -> Configure Build Path -> Libraries -> Add External Jars ->
		 * browse to driver location, select the driver and then OK, apply and close
		 * 
		 * Driver Location for Oracle:
		 * c:/oracle.exe/app/oracle/product/10.2.0/server/jdbc/lib/jdbc14.jar If driver
		 * not found, then download jdbc driver and add the jar there
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

			Statement statement = connection.createStatement();

			// STEP-5: To execute a query, call an execute method from Statement
			/*
			 * We can execute queries using three different ways/methods:
			 * 
			 * 1) execute: Returns true if the first object that the query returns is a ResultSet object. 
			 * 	  Use this method if the query could return one or more ResultSet objects. 
			 * 	  Retrieve the ResultSet objects returned from the query by repeatedly calling Statement.getResultSet.
			 * 
			 * 2) executeQuery: Returns one ResultSet object. //Use this when the result is a row details or list of row details
			 * 
			 * 3) executeUpdate: Returns an integer representing the number of rows affected by the SQL statement. 
			 *    Use this method if you are using INSERT, DELETE, or UPDATE SQL statements.
			 */
			
			//Example1: Using execute method;
			//Create table student(id number, name varchar2(20), email varchar2(20), phone number);
			boolean doesReturnsResultSet = statement.execute("select * from student"); //Create a student table in sql before executing this;
			if(doesReturnsResultSet) {
				//Retrieve the resultSet using the method getResultSet from statement
				ResultSet rs = statement.getResultSet(); //MORE about result set in next notes
				while(rs.next()) {
					System.out.println(rs.getString(1) + " " + rs.getString(2)); //getString is used to read the particular row details, 1 indexed
				}
			}
			
			// STEP-6: Close the connection after use
			connection.close();

		} catch (SQLException e) {
			System.out.println("Connection Failed: " + e.getMessage());
		} catch (ClassNotFoundException e) {
			System.out.println("Connection Failed, Failed to Load the Driver: " + e.getMessage());
		}

	}

}
