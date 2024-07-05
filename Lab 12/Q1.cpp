#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

class Circle {
private:
	double radius;
public:
	Circle(double r) {
		radius = r;
	}

	friend void calculateArea(Circle circle);
};

void calculateArea(Circle circle) {
	cout << "Area of Circle: " << M_PI * circle.radius * circle.radius;
}

int main() {
	cout << "Tooba Farooq SE-009" << endl;

	Circle circle(19.8);
	calculateArea(circle);

	return 0;
}
