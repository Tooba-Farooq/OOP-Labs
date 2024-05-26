#include <iostream>

using namespace std;

class Employees {
private:
	string name;
	int salary;
	
public:
	Employees(string n, int s) {
		name = n;
		salary = s;
	}

	void displayDetails() {
		cout << "The employee name is " << name << " and their salary is " << salary;
	}
};

int main() {
	cout << "Tooba Farooq SE-009" << endl;

	Employees employee1("Asma Khan", 250000);
	employee1.displayDetails();

	return 0;
}
