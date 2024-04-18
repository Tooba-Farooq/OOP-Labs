#include <iostream>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int number = 5;
    int factorial = 1;

    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    cout << "Factorial of " << number << ": " << factorial << endl;

    return 0;
}
