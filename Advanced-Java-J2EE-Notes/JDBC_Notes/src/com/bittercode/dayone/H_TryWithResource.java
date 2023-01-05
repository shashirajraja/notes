package com.bittercode.dayone;

import java.sql.Connection; 
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class H_TryWithResource {

	public static void main(String[] args) throws ClassNotFoundException {


		//Load the driver
		Class.forName("java.sql.Driver"); 
		System.out.println("Driver Loaded Successfully");

		// STEP-3: Get the userName, password and connectionString for the database
		String username = "system";
		String password = "root";
		String connectionString = "jdbc:oracle:thin:@localhost:1521:orcl";
					
		/*
		 * use a try-with-resources statement to automatically close Connection, Statement, and ResultSet objects 
		 */
		try(Connection connection = DriverManager.getConnection(connectionString, username, password);
				Statement statement = connection.createStatement();) {
			
			//Step: Execute Query to get result set object
			ResultSet rs = statement.executeQuery("select * from student"); //we can move this also to try
			
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
			
			
			// connection.close();
			// statement.close(); //NOT required as we have used try with resource
			rs.close();

		} catch (SQLException e) {
			System.out.println("Connection Failed: " + e.getMessage());
		} 

	}

}
