#include <iostream>
#include <string>
using namespace std;

struct Product {
	string productName;
	int price;
	int quantity;
};

int main() {
	Product product;

	cout << "Tooba Farooq SE-009" << endl;
	cout << "Enter product name: ";
	cin >> product.productName;
	cout << "Enter product price: ";
	cin >> product.price;
	cout << "Enter quantity: ";
	cin >> product.quantity;
	cout << endl;

	cout << "The total cost is " << product.price * product.quantity << " Rs." << endl;

	return 0;
}
