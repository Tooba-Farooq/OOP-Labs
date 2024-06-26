#include <iostream>

using namespace std;

class Person {
protected:
	string name;
	int age;
public:
	Person(string n, int a) {
		name = n;
		age = a;
	};
	
};

class Student : public Person {
private:
	int studentID;
public:
	Student(string name, int age, int ID):Person(name, age), studentID(ID){}

	void displayInfo() {
		cout << "Student ID: " << studentID << endl;
		cout << "Student name: " << name << endl;
		cout << "Student age: " << age << endl;
	}
};

int main() {

	cout << "Tooba Farooq SE-009" << endl;

	Student s1("Tooba", 19, 9);
	s1.displayInfo();

	return 0;
}
