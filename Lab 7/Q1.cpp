#include <iostream>

using namespace std;

class Vehicle {
public:
	Vehicle() {};
	
	void move() {
		cout << "Vehicle is moving" << endl;
	}
};

class Car : public Vehicle {
public:
	void move() {
		cout << "Car is moving" << endl;
	}
};

int main() {

	cout << "Tooba Farooq SE-009" << endl;

	Car car;
	car.move();

	return 0;
}
