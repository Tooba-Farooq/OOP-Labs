#include <iostream>
#include <string>

using namespace std;

int main() {
    string num = "153";
    int powerProduct;
    int sum=0;

    for (int i = 0; i < num.size(); i++) {
        powerProduct = (int)num[i] - 48;
        for (int j = 1; j <= num.size() - 1; j++) {
            powerProduct *= (int)num[i] - 48;
        }
        sum += powerProduct;
    }

    // Had to convert to string manually as to_string method is not working.
    string sumString = "";
    int tempSum = sum;
    while (tempSum > 0) {
        sumString = char(tempSum % 10 + '0') + sumString;
        tempSum /= 10;
    }

    if (sumString == num) {
        cout << num << " is an Armstrong number." << endl;
    }
    else {
        cout << num << " is not an Armstrong number." << endl;
    }
    
    return 0;
}
