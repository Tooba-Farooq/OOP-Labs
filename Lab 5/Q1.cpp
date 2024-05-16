#include <iostream>


using namespace std;

int main() {

    cout << "Tooba Farooq SE-009" << endl;

    int arr[3][3] = {
        {1, 2, 3},
        { 4, 5, 6 },
        { 7, 8, 9 } 
    };
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << endl;
    }

    cout << "The sum of all elements of 2d array is " << sum << endl;


    return 0;
}
