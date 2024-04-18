#include <iostream>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int n = 34;
    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 0; first <= n; ++i) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}
