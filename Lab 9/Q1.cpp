#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
	Shape() {}

	virtual void area() = 0;

};

class Rectangle : public Shape {
private:
	double width;
	double height;
public:
	Rectangle(int w, int h):width(w),height(h){}

	void area() override {
		cout << "Area of Rectangle: " << height * width << endl;
	}
};

class Circle : public Shape {
private:
	double radius;
public:
	Circle(double r) :radius(r)  {}

	void area() override {
		cout << "Area of circle is: " << 3.14 * radius * radius << endl;
	}
};

int main() {

	cout << "Tooba Farooq SE-009" << endl;

	Shape* circlePtr = new Circle(13.9);
	Shape* rectanglePtr = new Rectangle(8.67, 7.43);

	circlePtr-> area();
	rectanglePtr->area();

	return 0;
}
