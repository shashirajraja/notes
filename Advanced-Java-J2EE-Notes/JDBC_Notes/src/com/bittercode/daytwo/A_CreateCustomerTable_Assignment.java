package com.bittercode.daytwo;

import java.io.FileInputStream;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.PropertyResourceBundle;
import java.util.ResourceBundle;

public class A_CreateCustomerTable_Assignment {

	public static void main(String[] args) throws ClassNotFoundException, SQLException, IOException {

		// Read the application properties file
		FileInputStream fis = new FileInputStream("src/application.properties");
		ResourceBundle rb = new PropertyResourceBundle(fis);
		System.out.println("Driver Loaded Successfully");
		String username = rb.getString("username");
		String password = rb.getString("password");
		String oracleConnectionString = rb.getString("connectionString");
		String driverName = rb.getString("driverName");

		Class.forName(driverName); // Load the driver

		// Try with resource
		try (Connection connection = DriverManager.getConnection(oracleConnectionString, username, password);) {

			// Create prepared statement for table creation
			PreparedStatement ps = connection.prepareStatement(
					"create table Customer (id varchar2(20) primary key, name varchar(25) not null, Email varchar(25), MobNo number(10), Gender char(1),DOB date, Password varchar(8))");

			// execute the command
			ps.execute();

			System.out.println("Table Created Successfully");

			// close the pS
			ps.close();

		} catch (SQLException e) {
			System.out.println("Error while execution");
			e.printStackTrace();
		}

	}

}
