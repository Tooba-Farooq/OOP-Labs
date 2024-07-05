#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
	double length;
	double width;
public:
	Rectangle(double l, double w) {
		length=l;
		width = w;
	}

	friend void calculatePerimeter(Rectangle rectangle);
};

void calculatePerimeter(Rectangle rectangle) {
	cout << "Perimeter of Rectangle: " << 2 * (rectangle.length + rectangle.width);
}

int main() {
	cout << "Tooba Farooq SE-009" << endl;

	Rectangle rectangle(19.8, 25.54);
	calculatePerimeter(rectangle);

	return 0;
}
