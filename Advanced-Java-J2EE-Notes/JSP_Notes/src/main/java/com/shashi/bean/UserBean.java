package com.shashi.bean;

import java.io.Serializable;

public class UserBean implements Serializable{

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	
	private String id;
	private String name;
	private String dob;
	private Long mob;
	private String email;
	private String gender;
	
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
	public String getDob() {
		return dob;
	}
	public void setDob(String dob) {
		this.dob = dob;
	}
	public Long getMob() {
		return mob;
	}
	public void setMob(Long mob) {
		this.mob = mob;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	
	
	
}
