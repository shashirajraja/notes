package com.bittercode.daytwo;

import java.io.FileInputStream;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.PropertyResourceBundle;
import java.util.ResourceBundle;
import java.util.Scanner;

import com.bittercode.daytwo.model.Customer;

public class C_LoginCustomer_Assignment {

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

		try (Scanner scan = new Scanner(System.in);
				Connection connection = DriverManager.getConnection(oracleConnectionString, username, password);) {

			//Scan the email and password
			Customer customer = new Customer();
			System.out.println("Enter Your Email");
			customer.setEmail(scan.nextLine());
			System.out.println("Enter Your Password");
			customer.setPwd(scan.nextLine());

			//Create the query
			PreparedStatement ps = connection
					.prepareStatement("select * from customer where email = ? and password = ?");
			
			//bind the values
			ps.setString(1, customer.getEmail());
			ps.setString(2, customer.getPwd());
			
			//ExecuteQuery and store the response
			ResultSet rs = ps.executeQuery();
			
			//If result set have some response that means login is success
			if (rs.next()) {

				//Read all the customer details from the result set
				customer.setId(rs.getString("ID"));
				customer.setDob(rs.getString("dob"));
				customer.setGender(rs.getString("gender").charAt(0));
				customer.setMob(rs.getLong("mob"));
				customer.setName(rs.getString("name"));

				System.out.println("User Login Success!, Welcome to Bitter Code");
				//Print the customer details
				System.out.println(customer);
			} else {
				System.out.println("Invalid login credentials,try again!!");
			}

		} catch (SQLException e) {
			System.out.println("Error while execution" + e.getMessage());
		}

	}

}
