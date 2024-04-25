#include <iostream>

using namespace std;

int main() {
    int table, limit;
    
    cout << "Tooba Farooq SE-009" << endl;
    cout << "Enter the table number: ";
    cin >> table;
    cout << "Enter the limit for table: ";
    cin >> limit;
    cout << "Multiplication table of " << table << " upto " << limit << ":" << endl;
    for (int i = 1; i <= limit; i++) {
        cout << table << " * " << i << " = " << table * i << endl;
    }
    
    return 0;
}
