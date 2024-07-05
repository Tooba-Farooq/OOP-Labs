#include <iostream>
#include <string>

using namespace std;

class Date {
private:
	int date, month, year;
public:
	Date(int d, int m, int y) {
		date = d;
		month = m;
		year = y;
	}

	Date(){}
	
	void display() {
		cout << date << "/" << month << "/" << year << endl;
	}
};

class Book {
private:
	string title;
	string author;
	Date date;

public:
	Book(string n, string a, Date d) {
		title = n;
		author = a;
		date = d;
	}

	void displayDetails() {
		cout << "Tilte: " << title << endl << "Author: " << author << endl << "Publication date: ";
		date.display();
	}
};

int main() {
	cout << "Tooba Farooq SE-009" << endl;
	Date date1(5, 11, 1867);
	Book book1("War and Peace", "Leo Tolstoy", date1);
	cout << "Book1 details: " << endl;
	book1.displayDetails();

	return 0;
}
