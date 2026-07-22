public class Book {
	// private fields here

	private String title;
	private String author;
	private String genre;
	private int numPages;

	// constructor here

	public Book(String title, String author, String genre, int numPages) {
		this.title = title;
		this.author = author;
		this.genre = genre;
		this.numPages = numPages;
	}
	
	// getter methods here

	public String getTitle() {
		return this.title;
	}

	public String getAuthor() {
		return this.author;
	}

	public String getGenre() {
		return this.genre;
	}

	public int getNumPages() {
		return this.numPages;
	}
}
