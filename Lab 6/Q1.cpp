#include <iostream>

using namespace std;

class Rectangle {
private:
	float length;
	float width;

public:
	Rectangle(float l, float w) {
		length = l;
		width = w;
	}

	void calculateArea() {
		cout << "Area of rectangle is " << length * width<<endl;
	}

	void calculatePerimeter() {
		cout << "Perimeter of rectangle is " << (length + width)*2;
	}
};

int main() {
	cout << "Tooba Farooq SE-009" << endl;

	Rectangle rectangle(12.5, 6.67);
	rectangle.calculateArea();
	rectangle.calculatePerimeter();

	return 0;
}
