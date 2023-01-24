package com.http.daysix.servlets;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.http.daysix.models.Book;
import com.http.daysix.service.BookService;
import com.http.daysix.service.BookServiceImpl;

public class AddBookHttpServlet extends HttpServlet {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	BookService bookService = new BookServiceImpl();

	
	@Override
	protected void doPost(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
		//insert book into db
		res.getWriter().println("post success");
		
		Book book = new Book();
		book.setAuthor(req.getParameter("author"));
		book.setBookId(System.currentTimeMillis()+"");
		book.setBookName(req.getParameter("bname"));
		book.setQty(Integer.parseInt(req.getParameter("available")));
		
		String message = bookService.addBook(book);
		if(!"Book Added Successfully".equalsIgnoreCase(message)) {
			res.setStatus(400);
		} 
		res.getWriter().print(message);
			
		
	}

	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
		//get books from the db
		res.getWriter().println("get success");
		Book book = bookService.getBookById(req.getParameter("bookid"));
		if(book == null) {
			res.setStatus(404);
		} 
		res.getWriter().print(book);

	}
	
	@Override
	protected void doPut(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
		//update the book in the db
		doPost(req, res);

	}

}
