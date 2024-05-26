#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

class Circle {
private:
	float radius;
	
public:
	Circle(float r) {
		radius = r;
	}

	void calculateArea() {
		cout << "Area of circle is " << M_PI*radius*radius<<endl;
	}

	void calculateCircumference() {
		cout << "Circumference of circle is " << 2*M_PI*radius;
	}
};

int main() {
	cout << "Tooba Farooq SE-009" << endl;

	Circle circle(6.67);
	circle.calculateArea();
	circle.calculateCircumference();

	return 0;
}
