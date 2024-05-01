#include <iostream>
using namespace std;

struct Rectangle {
	float length;
	float width;
};

int main() {
	Rectangle r1;

	cout << "Tooba Farooq SE-009" << endl;
	cout << "Enter rectangle length: ";
	cin >> r1.length;
	cout << "Enter rectangle width: ";
	cin >> r1.width;
	cout << "Area of rectngle: " << r1.length * r1.width << endl;
	
	return 0;
}
