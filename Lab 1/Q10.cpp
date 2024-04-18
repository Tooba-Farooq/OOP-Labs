#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int number = 153, originalNumber = number, remainder, result = 0, n = 0;

    for (; originalNumber != 0; originalNumber /= 10) {
        n++;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
