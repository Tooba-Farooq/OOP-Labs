#include <iostream>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int amount, thousandNotes, fiveHundredNotes, hundredNotes, fiftyNotes, tenNotes, fiveNotes, twoNotes, oneNotes;

    cout << "Enter amount in rupees: ";
    cin >> amount;

    thousandNotes = amount / 1000;
    amount %= 1000;

    fiveHundredNotes = amount / 500;
    amount %= 500;

    hundredNotes = amount / 100;
    amount %= 100;

    fiftyNotes = amount / 50;
    amount %= 50;

    tenNotes = amount / 10;
    amount %= 10;

    fiveNotes = amount / 5;
    amount %= 5;

    twoNotes = amount / 2;
    amount %= 2;

    oneNotes = amount;

    cout << "Breakdown of the amount:" << endl << "1000's in the given amount is: " << thousandNotes << endl << "500's in the given amount is: " << fiveHundredNotes << endl << "100's in the given amount is: " << hundredNotes << endl << "50's in the given amount is: " << fiftyNotes << endl << "10's in the given amount is: " << tenNotes << endl << "5's in the given amount is: " << fiveNotes << endl << "2's in the given amount is: " << twoNotes << endl << "1's in the given amount is: " << oneNotes << endl;

    return 0;
}
