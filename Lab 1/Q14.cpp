#include <iostream>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    double fahrenheit, celsius;

    cout << "Enter the Fahrenheit temperature: ";
    cin >> fahrenheit;

   
    celsius = (fahrenheit - 32) * 5 / 9.0;

    cout << "Celsius temperature: " << celsius << endl;

    return 0;
}
