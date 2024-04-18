#include <iostream>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    double num1, num2, sum, average;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;
    average = sum / 2.0;

    cout << "Sum is " << sum << endl;
    cout << "Average is " << average << endl;

    return 0;
}
