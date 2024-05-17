#include <iostream>

using namespace std;

int main() {

    cout << "Tooba Farooq SE-009" << endl;

    int arr[3][3] = {
        {1, 2, 3},
        {2, 3, 6},
        {3, 6, 1},
    };
    bool symmetric = true;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if (arr[i][j] != arr[j][i]) {
                symmetric = false;
                break;
            }
            if (!symmetric) {
                break;
            }
        }
    }
    if (symmetric) {
        cout << "The matrix is symmetric." << endl;
    }
    else {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}
