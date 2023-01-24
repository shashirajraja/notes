package com.http.daysix.service;

import com.http.daysix.models.Book;

public interface BookService {
	
	String addBook(Book book);
	
	
	Book getBookById(String bookId);

}
