#include <iostream>

using namespace std;

int main() {
    int terms, first_term = 0, second_term = 1, next_term;

    cout << "Tooba Farooq SE-009" << endl;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> terms;

    if (terms <= 0) {
        cout << "Invalid input. Number of terms should be greater than zero." << endl;
    }

    else {
        cout << "Fibonacci series upto " << terms << " terms: " << endl;

        if (terms >= 1) {
            cout << first_term << " ";
        }

        if (terms >= 2) {
            cout << second_term << " ";
        }

        for (int i = 3; i <= terms; i++) {
            next_term = first_term + second_term;
            cout << next_term << " ";
            first_term = second_term;
            second_term = next_term;
        }
    }
    
    return 0;
}
