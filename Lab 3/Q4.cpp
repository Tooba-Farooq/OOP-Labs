#include <iostream>
using namespace std;

struct Student {
	string rollno;
	string name;
	int age;
	float marks;
};

int main() {
	Student arr[3];


	cout << "Tooba Farooq SE-009" << endl;
	
	for (int i = 0; i <= 2; i++) {
		cout << "Enter student " << i + 1 << " rollno: ";
		cin >> arr[i].rollno;
		cout << "Enter student " << i + 1 << " name: ";
		cin >> arr[i].name;
		cout << "Enter student " << i + 1 << " age: ";
		cin >> arr[i].age;
		cout << "Enter student " << i + 1 << " marks: ";
		cin >> arr[i].marks;
		cout << endl;
	}

	for (int j = 0; j <= 2; j++) {
		cout << "Student " << j + 1 << " roll no: " << arr[j].rollno << endl;
		cout << "Student " << j + 1 << " name: " << arr[j].name << endl;
		cout << "Student " << j + 1 << " age: " << arr[j].age << endl;
		cout << "Student " << j + 1 << " marks: " << arr[j].marks << endl;
		cout << endl;
	}

	float highest_marks = arr[0].marks;
	int highest_student = 0;

	for (int i=0; i<=2; i++) {
		if (arr[i].marks > highest_marks) {
			highest_marks = arr[i].marks;
			highest_student = i;
		}
	}

	cout << arr[highest_student].name << " got highest marks of " << highest_marks << endl;
	
	return 0;
}
