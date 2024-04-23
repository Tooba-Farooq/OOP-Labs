#include <iostream>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    char character;

    cout << "Enter a letter: ";
    cin >> character;

    int ascii_value = int(character);
    if (ascii_value >= 65 && ascii_value <= 90) {
        cout << "Entered character is a capital letter" << endl;
    }
    else if (ascii_value >= 97 && ascii_value <= 122) {
        cout << "Entered character is a small letter" << endl;
    }
    else if (ascii_value >= 48 && ascii_value <= 57) {
        cout << "Entered character is a number" << endl;
    }
    else {
        cout << "Entered character is a special symbol" << endl;
    }

    return 0;
}

