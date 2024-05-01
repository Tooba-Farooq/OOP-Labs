#include <iostream>
using namespace std;

struct Number {
	int num;
};

void swap(Number &n1, Number &n2) {
	int temp = n1.num;
	n1.num = n2.num;
	n2.num = temp;

};

int main() {
	Number num1, num2;

	cout << "Tooba Farooq SE-009" << endl;
	cout << "Enter number 1: ";
	cin >> num1.num;
	cout << "Enter number 2: ";
	cin >> num2.num;
	swap(num1, num2);
	cout << num1.num << endl << num2.num << endl;

	return 0;
}
