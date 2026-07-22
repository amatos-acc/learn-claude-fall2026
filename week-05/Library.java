import java.util.ArrayList;

public class Library {
	private ArrayList<Book> books;

	public Library() {
		this.books = new ArrayList<Book>();
	}

	public void addBook(Book book) {
		books.add(book);
	}
	
	public void printBook() {
		for (Book book : books) {
			System.out.println("Title: " + book.getTitle() + " | " + "Author: " + book.getAuthor() + " | " + "Genre: " + book.getGenre() + " | " + "Pages: " + book.getNumPages());
		}
	}
}
