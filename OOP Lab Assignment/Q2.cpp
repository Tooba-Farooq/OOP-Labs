#include <iostream>
#include <cstring>

using namespace std;

class Book {
private:
	int publicationID;
	char bookTitle[100];
	char authors[100];
	char listOfPatronSubscribers[100];

public:
	Book(int pID, const char* bt, const char* a, const char* lps) {
		publicationID = pID;
		strcpy_s(bookTitle, bt);
		strcpy_s(authors, a);
		strcpy_s(listOfPatronSubscribers, lps);
	}

	Book(){}

	int getID() {
		return publicationID;
	}

	void setID(int pID) {
		publicationID = pID;
	}

	void setTitle(const char* bt) {
		strcpy_s(bookTitle, bt);
	}

	void setAuthor(const char* a) {
		strcpy_s(authors, a);
	}

	void setPatronSubscribers(const char* lsp) {
		strcpy_s(listOfPatronSubscribers, lsp);
	}

	void displayBook() {
		cout << endl << "Publication ID: " << publicationID << endl;
		cout << "Book Title: " << bookTitle << endl;
		cout << "Author: " << authors << endl;
		cout << "List of patron subscribers: " << listOfPatronSubscribers << endl;
	}

};
Book book1(1, "Anna Kerenina", "Leo Toltoy", "Aaqib, Aashir, Hafiza, Basim, Bisma");
Book book2(2, "War and Peace", "Leo Tolstoy", "Farooq, Muneeb, Layla, Basim, Waqas");
Book Library[1000] = {book1, book2};
int noOfBooks = 2;

void addBook() { 
	int ID;
	char title[100], au[100], patronSubscribers[100];
	bool bookPresent = false;

	cout << endl<< "Enter Publication ID: ";
	cin >> ID;
	cin.ignore();
	cout << "Enter book title: ";
	cin.getline(title, 100);
	cout << "Enter Author name: ";
	cin.getline(au, 100);
	cout << "Enter names of patron subscribers: ";
	cin.getline(patronSubscribers, 100);
	for (int i = 0; i < noOfBooks; i++) {
		if (ID == Library[i].getID()) {
			cout << "Book of this ID already exists" << endl << endl;
			bookPresent = true;
			break;
		}
	}
	if (!bookPresent) {
		Library[noOfBooks] = Book(ID, title, au, patronSubscribers);
		noOfBooks++;
		cout << "Book is successfully added" << endl;
	}
	
}

void editBook() {
	int ID;
	bool bookPresent = false;
	int i, choice;

	cout << endl << "Enter publication ID of book you want to edit: ";
	cin >> ID;

	for (i = 0; i < noOfBooks; i++) {
		if (Library[i].getID() == ID) {
			bookPresent = true;
			break;
		}
	}

	if (bookPresent) {
		Library[i].displayBook();
		while (true) {
			cout << endl << "What do you want to edit?" << endl;
			cout << "1. Publication ID" << endl;
			cout << "2. Book Title" << endl;
			cout << "3. Author" << endl;
			cout << "4. List of Patronsubscribers" << endl;
			cout << "5. Exit" << endl;;
			cout << "Enter your choice: ";
			cin >> choice;
			cin.ignore();
			switch (choice) {
			case 1:
				cout << "Enter new Publication ID: ";
				cin >> ID;
				cin.ignore();
				Library[i].setID(ID);
				break;

			case 2:
				char title[100];
				cout << "Enter new Title: ";
				cin.getline(title, 100);
				Library[i].setTitle(title);
				break;

			case 3:
				char author[100];
				cout << "Enter new author: ";
				cin.getline(author, 100);
				Library[i].setAuthor(author);
				break;

			case 4:
				char patronSubscribers[100];
				cout << "Enter edited list of patron subscribers: ";
				cin.getline(patronSubscribers, 100);
				Library[i].setPatronSubscribers(patronSubscribers);
				break;

			case 5:
				return;
			default:
				cout << "Invalid choice!" << endl;
				break;
			}	
		}
	}
	else {
		cout << "No book of this publication ID is present" << endl;
	}
}

void deleteBook() {
	int ID, i;
	bool bookPresent = false;
	cout << endl << "Enter publication ID of book you want to delete: ";
	cin >> ID;

	for (i = 0; i < noOfBooks; i++) {
		if (Library[i].getID() == ID) {
			bookPresent = true;
			break;
		}
	}

	if (bookPresent) {
		for (int j = 0; j < noOfBooks - i; j++) {
			Library[i] = Library[i + 1];
		}
		noOfBooks--;
		cout << "Book is successfully deleted" << endl;
	}
}
void displayBooks() {
	cout << endl << "COMPLETE LIST OF BOOKS" << endl;
	if (noOfBooks <= 0) {
		cout << "No books available" << endl;
	}
	else {
		for (int i = 0; i < noOfBooks; i++) {
			Library[i].displayBook();
		}
	}
	
}
	
int main() {

	int choice;
	while (true) {
		cout << endl << "Welcome to Tooba Library" << endl;
		cout << "-------------------" << endl;
		cout << "1. Add a new book" << endl;
		cout << "2. Edit details of an available book" << endl;
		cout << "3. Delete a book" << endl;
		cout << "4. Display all books" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			addBook();
			break;
		case 2:
			editBook();
			break;
		case 3:
			deleteBook();
			break;
		case 4:
			displayBooks();
			break;
		case 5:
			return 0;
		default:
			cout << "Invalid choice, try again." << endl;
			break;
		}
	}

	return 0;
}
