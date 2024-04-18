#include <iostream>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int totalSeconds, hours, minutes, seconds;

    cout << "Enter the time in seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    totalSeconds %= 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    cout << "Hours in time is: " << hours << endl << "Minutes in time: " << minutes << endl << "Seconds in time is: " << seconds << endl;

    return 0;
}
