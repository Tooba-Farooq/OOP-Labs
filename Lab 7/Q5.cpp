#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
	string colour;
public:
	Shape(string c) {
		colour = c;
	}

	virtual float area() = 0;

	virtual void display() {
		cout << "Colour of the shape: " << colour << endl;
	}
	
};

class Rectangle : public Shape {
private:
	double width;
	double height;
public:
	Rectangle(int w, int h, string colour):width(w),height(h),Shape(colour){}

	float area() override {
		return height * width;
	}

	void display() override {
		cout << "Colour of Rectangle: " << colour << endl;
		cout << "Height of Rectangle: " << height << endl;
		cout << "Width of Rectangle: " << width << endl;
		cout << "Area of Rectangle: " << area() << endl;
		
	}
};

class Circle : public Shape {
private:
	double radius;
public:
	Circle(string colour, double r) :Shape(colour),radius(r)  {}

	float area() override {
		return 3.14*radius*radius;
	}

	void display() override {
		cout << "Colour of Circle: " << colour << endl;
		cout << "Radius of Circle: " << radius << endl;
		cout << "Area of Circle: " << area() << endl;

	}
};

int main() {

	cout << "Tooba Farooq SE-009" << endl;

	Shape* circlePtr = new Circle("Yellow", 13.9);
	Shape* rectanglePtr = new Rectangle(8.67, 7.43, "Red");

	circlePtr-> display();
	rectanglePtr->display();

	return 0;
}
