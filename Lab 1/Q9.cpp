#include <iostream>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int year = 2024;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
