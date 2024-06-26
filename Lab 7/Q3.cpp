#include <iostream>

using namespace std;

class Shape {
public:
	Shape(){}

	void draw() {
		cout << "Drawing shape." << endl;
	}
	
};

class Circle : public Shape {
public:
	Circle(){}

	void draw() {
		cout << "Drawing circle." << endl;
	}
};

class Square : public Shape {
public:
	Square() {}

	void draw() {
		cout << "Drawing square." << endl;
	}
};

int main() {

	cout << "Tooba Farooq SE-009" << endl;

	Circle c1;
	Square s1;

	c1.draw();
	s1.draw();

	return 0;
}
