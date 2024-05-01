#include <iostream>
using namespace std;

struct Employee {
	string employee_id;
	string name;
	string department;
	int salary;
};

int main() {
	Employee arr[5];
	int totalSalary = 0;

	cout << "Tooba Farooq SE-009" << endl;

	for (int i = 0; i <= 4; i++) {
		cout << "Enter employee " << i + 1 << " ID: ";
		cin >> arr[i].employee_id;
		cout << "Enter employee " << i + 1 << " name: ";
		cin >> arr[i].name;
		cout << "Enter employee " << i + 1 << " department: ";
		cin >> arr[i].department;
		cout << "Enter employee " << i + 1 << " salary: ";
		cin >> arr[i].salary;
		cout << endl;

		totalSalary += arr[i].salary;
	}

	for (int j = 0; j <= 4; j++) {
		cout << "Employee" << j + 1 << endl;
		cout << "ID: " << arr[j].employee_id << endl;
		cout << "Name: " << arr[j].name << endl;
		cout << "Department: " << arr[j].department << endl;
		cout << "Salary: " << arr[j].salary << endl;
		cout << endl;
	}

	cout << "Average salary of employees is " << totalSalary / 5 << "Rs." << endl;
	
	return 0;
}
