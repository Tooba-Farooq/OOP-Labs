#include <iostream>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int number, originalNumber, reverseNumber;

    cout << "Enter a two-digit integer value: ";
    cin >> number;

    originalNumber = number;

    reverseNumber = (number % 10) * 10 + (number / 10);

    cout << "Reverse of this value is: " << reverseNumber << endl;

    return 0;
}
