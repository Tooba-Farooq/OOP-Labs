#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
private:
	string title, author, publicationDate;
public:
	Book(string t, string a, string d) {
		title = t;
		author = a;
		publicationDate = d;
	}

	Book(){}
	
	void display() {
		cout << "Title: " << title << endl << "Author: " << author << endl << "Publication date: " << publicationDate 
			<< endl;
	}
};

class Library {
private:
	vector<Book>books;

public:
	void addBook(Book book) {
		books.push_back(book);
	}

	void displayBooks() {
		for (auto& book : books) {
			cout << endl;
			book.display();
		}
	}
};

int main() {
	cout << "Tooba Farooq SE-009" << endl;

	Book book1("War and Peace", "Leo Tolstoy", "5/11/1867");
	Book book2("Shahab Nama", "Qudrat ullah Shahab", "6/9/1973");
	
	Library library;
	library.addBook(book1);
	library.addBook(book2);

	library.displayBooks();

	return 0;
}
