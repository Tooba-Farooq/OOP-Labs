#include <iostream>

using namespace std;

int main() {
    int operation;
    double num1, num2, result;

    cout << "Tooba Farooq SE-009" << endl;
    cout << "Simple calculator" << endl;
    cout << "-----------------" << endl;
    cout << "Menu: " << endl;
    cout << "1. Addition" << endl;
    cout << "1. Subtraction" << endl;
    cout << "1. Multiplication" << endl;
    cout << "1. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> operation;
    cout << "Enter first number:" << endl;
    cin >> num1;
    cout << "Enter second number:" << endl;
    cin >> num2;

    switch (operation) {
        case 1:
            result = num1 + num2;
            cout << "Result:" << num1 << "+" << num2 << "=" << num1 + num2 << endl;
            break;
        case 2:
            result = num1 + num2;
            cout << "Result:" << num1 << "-" << num2 << "=" << num1 - num2 << endl;
            break;
        case 3:
            result = num1 + num2;
            cout << "Result:" << num1 << "*" << num2 << "=" << num1 * num2 << endl;
            break;
        case 4:
            result = num1 + num2;
            cout << "Result:" << num1 << "/" << num2 << "=" << num1 / num2 << endl;
            break;
    }
        

    return 0;
}
