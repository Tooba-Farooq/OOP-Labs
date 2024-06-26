#include <iostream>
#include <cmath>

using namespace std;

class Vehicle {
protected:
	float distanceTraveled;
	float fuelConsumed;
public:
	Vehicle(float dT, float fC): distanceTraveled(dT), fuelConsumed(fC) {}

	virtual void fuelEfficiency() = 0;

};

class Car: public Vehicle {
public:
	Car(float dT, float fC):Vehicle(dT, fC){}

	void fuelEfficiency() override {
		cout << "Fuel Efficiency of a car is: " << distanceTraveled/fuelConsumed << endl;
	}
};

class Truck : public Vehicle {
public:
	Truck(float dT, float fC) :Vehicle(dT, fC) {}

	void fuelEfficiency() override {
		cout << "Fuel Efficiency of a truck is: " << distanceTraveled / fuelConsumed << endl;
	}
};

int main() {

	cout << "Tooba Farooq SE-009" << endl;

	Vehicle* carPtr = new Car(4, 50);
	Vehicle* truckPtr = new Truck(4, 100);

	carPtr-> fuelEfficiency();
	truckPtr->fuelEfficiency();

	return 0;
}
