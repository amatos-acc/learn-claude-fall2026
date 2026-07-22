public class Main {
	public static void main(String[] args) {
        	Library library = new Library();

		library.addBook(new Book("The Quantum Potato", "Thaddeus Q. Spud", "Culinary Sci-Fi", 342));
		library.addBook(new Book("Whispers in the Wallpaper", "Eleanor Vance-Trench", "Domestic Thriller", 418));		
		library.addBook(new Book("The Goblet of Mild Inconvenience", "Bartholomew Fizz", "Low-Stakes Fantasy", 205));
		
		library.printBooks();
	}
}

