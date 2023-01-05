package com.bittercode.dayone;

import java.sql.Connection; //STEP-0: update the module-info.java with "requires java.sql;"
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class F_ResultSet { //See Step-6

	public static void main(String[] args) {

		// STEP-1: Add driver location in build path
		try {

			// STEP-2: Load the driver
			Class.forName("java.sql.Driver"); // Throws ClassNotFoundException if driver not found
			System.out.println("Driver Loaded Successfully");

			// STEP-3: Get the userName, password and connectionString for the database
			String username = "system";
			String password = "root";
			String connectionString = "jdbc:oracle:thin:@localhost:1521:orcl";
			
			// STEP-4: Get the Connection using the getConnection method of DriverManager
			Connection connection = DriverManager.getConnection(connectionString, username, password); // Throws SQLException if userName, password of connectionString is wrong, or

			if (connection == null) {
				System.out.println("Unable to connect to Database");
				System.exit(1);
			}

			// STEP-5: Creating Statement
			Statement statement = connection.createStatement();

			//Create table student(id number, name varchar2(20), email varchar2(20), phone number);
			//insert into student values(23456,'shashi','shashi@gmail.com',2345678)
			
			//Step-6: Execute Query to get result set object
			ResultSet rs = statement.executeQuery("select * from student"); 
			/*
			 * You access the data in a ResultSet object through a cursor. 
			 * Note that this cursor is not a database cursor. 
			 * This cursor is a pointer that points to one row of data in the ResultSet object. 
			 * Initially, the cursor is positioned before the first row. 
			 * You call various methods defined in the ResultSet object to move the cursor.
			 * 
			 */
			
			/*
			 * For example, below code repeatedly calls the method ResultSet.next to move the cursor forward by one row. 
			 * Every time it calls next, the method outputs the data in the row where the cursor is currently positioned:
			 */
			
			//Step-7: iterate the resultSet using next()
			while(rs.next()) { //executes until the pointer reaches the last row
				
				//We can read the column detail based on 1 indexed or based on column name in db
				int id = rs.getInt(1); //read first column
				String name = rs.getString(2); //fetch second column of current row
				String email = rs.getString("email"); //fetch the column detail based on column name
				long phone = rs.getLong("phone"); //fetch the phone number column data of this row
				
				//printing all the details of the row
				System.out.println(id + " " + name + " " + email + " " + phone);
			}
			
			// STEP-8: Close the connection after use
			connection.close();

		} catch (SQLException e) {
			System.out.println("Connection Failed: " + e.getMessage());
		} catch (ClassNotFoundException e) {
			System.out.println("Connection Failed, Failed to Load the Driver: " + e.getMessage());
		}

	}

}
