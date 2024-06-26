#include <iostream>
#include <cmath>

using namespace std;

class Employee {
public:
	Employee() {}

	virtual void calculateSalary() = 0;

};

class PermanentEmployee: public Employee {
private:
	int baseSalary;
	int bonus;
public:
	PermanentEmployee(int bS, int b):baseSalary(bS),bonus(b){}

	void calculateSalary() override {
		cout << "Salary of permanent employee: " << baseSalary + bonus << endl;
	}
};

class ContractEmployee : public Employee {
private:
	int hourlyRate;
	int hoursWorked;
public:
	ContractEmployee(int hR, int hW) :hourlyRate(hR), hoursWorked(hW)  {}

	void calculateSalary() override {
		cout << "Salary of Contract Eployee is: " << hourlyRate*hoursWorked << endl;
	}
};

int main() {

	cout << "Tooba Farooq SE-009" << endl;

	Employee* permanentPtr = new PermanentEmployee(100000, 50000);
	Employee* contractPtr = new ContractEmployee(500, 48);

	permanentPtr-> calculateSalary();
	contractPtr->calculateSalary();

	return 0;
}
