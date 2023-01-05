package com.bittercode.daytwo.model;

//Create the model
public class Customer {

	String id;
	String name;
	String email;
	long mob;
	char gender;
	String dob;
	String pwd;

	public Customer(String id, String name, String email, long mob, char gender, String dob, String pwd) {
		super();
		this.id = id;
		this.name = name;
		this.email = email;
		this.mob = mob;
		this.gender = gender;
		this.dob = dob;
		this.pwd = pwd;
	}

	public Customer() {
	}

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public long getMob() {
		return mob;
	}

	public void setMob(long mob) {
		this.mob = mob;
	}

	public char getGender() {
		return gender;
	}

	public void setGender(char gender) {
		this.gender = gender;
	}

	public String getDob() {
		return dob;
	}

	public void setDob(String dob) {
		this.dob = dob;
	}

	public String getPwd() {
		return pwd;
	}

	public void setPwd(String pwd) {
		this.pwd = pwd;
	}

	@Override
	public String toString() {
		return "Customer [id=" + id + ", name=" + name + ", email=" + email + ", mob=" + mob + ", gender=" + gender
				+ ", dob=" + dob + ", pwd=" + pwd + "]";
	}

}
