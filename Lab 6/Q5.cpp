#include <iostream>

using namespace std;
class Car {
private:
	string brand;
	string model;
	int year;

public:
	Car(string b, string m, int y) {
		brand = b;
		model = m;
		year = y;
	}

	void displayDetails() {
		cout << "Car brand: " << brand << endl;
		cout << "Car model: " << model << endl;
		cout << "Car year: " << year << endl;
	}


};

int main() {
	cout << "Tooba Farooq SE-009" << endl;
	Car car1("BMW", "4 series", 2017);
	car1.displayDetails();
	return 0;
}
