#include <iostream>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int calls;

    cout << "Enter number of calls: ";
    cin >> calls;

    if (calls <= 100) {
        cout << "Your telephone bill is 200 Rs." << endl;
    }
    else if (calls <= 150) {
        cout << "Your telephone bill is " << 200 + (calls - 100) * 0.6 << " Rs." << endl;
    }
    else if (calls <= 200) {
        cout << "Your telephone bill is " << 230 + (calls - 150) * 0.5 << " Rs." << endl;
    }
    else {
        cout << "Your telephone bill is " << 250 + (calls - 200) * 0.4 << " Rs." << endl;
    }

    return 0;
}