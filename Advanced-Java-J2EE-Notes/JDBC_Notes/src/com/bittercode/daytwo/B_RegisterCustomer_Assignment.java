package com.bittercode.daytwo;

import java.io.FileInputStream;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.PropertyResourceBundle;
import java.util.ResourceBundle;
import java.util.Scanner;

import com.bittercode.daytwo.model.Customer;

public class B_RegisterCustomer_Assignment {

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

			// Create a model and use it here
			Customer customer = new Customer();

			// Create a unique id automatically and set to the customer model
			customer.setId(System.currentTimeMillis() + "");

			// Scan all the required field and set into the customer model to be used later
			System.out.println("Enter Your Name");
			customer.setName(scan.nextLine());
			System.out.println("Enter Your Email");
			customer.setEmail(scan.nextLine());
			System.out.println("Enter Your Mobile Number");
			customer.setMob(scan.nextLong());
			scan.nextLine();
			System.out.println("Enter Your gender");
			String gender = scan.nextLine();
			customer.setGender((gender).charAt(0));
			System.out.println("Enter Your DOB");
			customer.setDob(scan.nextLine());
			System.out.println("Enter Your Password");
			customer.setPwd(scan.nextLine());

			// Prepare the statement to insert into db
			PreparedStatement ps = connection.prepareStatement("insert into customer values(?,?,?,?,?,?,?)");

			// bind all the required values into the ps
			ps.setString(1, customer.getId());
			ps.setString(2, customer.getName());
			ps.setString(3, customer.getEmail());
			ps.setLong(4, customer.getMob());
			ps.setString(5, customer.getGender() + "");
			ps.setString(6, customer.getDob());
			ps.setString(7, customer.getPwd());
			System.out.println(customer);

			// Execute the query using correct method
			int response = ps.executeUpdate();

			// Return the response based on success
			if (response > 0) {
				System.out.println("Thank you for your registration, you have been successfully registered with id: "
						+ customer.getId());
			} else {
				System.out.println("Something went wrong while registraion, try again!!");
			}

		} catch (SQLException e) {
			System.out.println("Error while execution" + e.getMessage());
		} finally {
			System.out.println("Thanks for Visiting Us!!");
		}

	}

}
