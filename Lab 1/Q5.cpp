#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Tooba Farooq SE-009" << endl;
    string str = "hello";
    int length = str.length();

    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
