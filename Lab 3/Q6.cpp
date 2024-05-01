#include <iostream>
#include <string>
using namespace std;

struct Book {
	string title;
	string author;
	string genre;
	int yearOfPublication;
};

int main() {
	Book arr[3];

	cout << "Tooba Farooq SE-009" << endl;

	for (int i = 0; i <= 2; i++) {
		cout << "Enter book " << i + 1 << " title: ";
		getline(cin, arr[i].title);
		cout << "Enter book " << i + 1 << " author: ";
		getline(cin, arr[i].author);
		cout << "Enter book " << i + 1 << " genre: ";
		getline(cin, arr[i].genre);
		cout << "Enter book " << i + 1 << " year of publication: ";
		cin >> arr[i].yearOfPublication;
		cin.ignore();
		cout << endl;
	}

	for (int j = 0; j <= 2; j++) {
		cout << "Book" << j + 1 << endl;
		cout << "title: " << arr[j].title << endl;
		cout << "Author: " << arr[j].author << endl;
		cout << "Genre: " << arr[j].genre << endl;
		cout << "Year of Publication: " << arr[j].yearOfPublication << endl;
		cout << endl;
	}

	int earliestYear = arr[0].yearOfPublication;
	string earliestBook = arr[0].title;

	for (int j = 0; j <= 2; j++) {
		if (arr[j].yearOfPublication < earliestYear) {
			earliestYear = arr[j].yearOfPublication;
			earliestBook = arr[j].title;
		}
	}

	cout << earliestBook << " was published first in the year " << earliestYear << endl;
	
	return 0;
}
