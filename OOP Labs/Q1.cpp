#include <iostream>
#include <string>
using namespace std;

void swap(int *n1, int *n2) {
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main() {
	int x, y;
	cout << "Tooba Farooq SE-009" << endl;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	int *p1 = &x;
	int *p2 = &y;
	swap(p1, p2);
	cout << "After swapping" << endl;
	cout << "First number: " << x << endl;
	cout << "Second number: " << y << endl;

	return 0;
}
