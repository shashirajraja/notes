package com.http.daysix.service;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.http.daysix.models.Book;
import com.util.DBUtil;

public class BookServiceImpl implements BookService {

	Connection conn = DBUtil.getConnection();

	@Override
	public String addBook(Book book) {
		
		try {
			PreparedStatement ps = conn.prepareStatement("insert into book values(?,?,?,?)");
			ps.setString(1, book.getBookId());
			ps.setString(2, book.getBookName());
			ps.setString(3, book.getAuthor());
			ps.setInt(4, book.getQty());
			
			int response = ps.executeUpdate();
			
			if(response <=0 ) return "ERROR, PLEASE TRY AGAIN";
			
		} catch (SQLException e) {
			e.printStackTrace();
			return "Unable to Add Book, please try again: " + e.getMessage();
		}
		
		return "Book Added Successfully";
	}

	@Override
	public Book getBookById(String bookId) {
		Book book = new Book();
		try {
			PreparedStatement ps = conn.prepareStatement("select * from book where bookid = "+ bookId);

			ResultSet rs = ps.executeQuery();
			
			if(rs.next()){
					book.setAuthor(rs.getString("author"));
					book.setBookId(rs.getString("bookid"));
					book.setBookName(rs.getString("bname"));
					book.setQty(rs.getInt("qty"));
				
			}else { 
				return null;
			}
		} catch (SQLException e) {
			e.printStackTrace();
			return null;
		}
		
		return book;
	}

}
