#include <iostream>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int num1 = 10, num2 = 15, num3 = 20;

    int maxNum = num1;

    if (num2 > maxNum) {
        maxNum = num2;
    }

    if (num3 > maxNum) {
        maxNum = num3;
    }

    // Print the maximum number
    cout << "Maximum number: " << maxNum << endl;

    return 0;
}
