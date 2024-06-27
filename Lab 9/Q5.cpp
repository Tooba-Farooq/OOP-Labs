#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() {}

	virtual void makeSound() = 0;

};

class Dog: public Animal {
public:
	Dog() {}

	void makeSound() override {
		cout << "Dog sound: Woof" << endl;
	}
};

class Cat : public Animal {
public:
	Cat() {}

	void makeSound() override {
		cout << "Cat sound: Meow" << endl;
	}
};

int main() {
	
	cout << "Tooba Farooq SE-009" << endl;
	Animal* dogPtr = new Dog;
	Animal* catPtr = new Cat;

	dogPtr->makeSound();
	catPtr->makeSound();

	return 0;
}
