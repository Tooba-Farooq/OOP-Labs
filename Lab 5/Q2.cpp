#include <iostream>

using namespace std;

int main() {

    cout << "Tooba Farooq SE-009" << endl;

    int arr[3][3] = {
        {1, 2, 7},
        {5, 9, 6},
        {3, 6, 5},
    };
    int temp;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout << endl << "Transpse: " << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
