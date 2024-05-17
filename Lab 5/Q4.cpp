#include <iostream>

using namespace std;

int main() {

    cout << "Tooba Farooq SE-009" << endl;

    int arr[3][3] = {
        {1, 2, 3},
        {5, 3, 6},
        {3, 1, 1},
    };
    int max;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            max = arr[i][0];
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        cout << "The largest element in " << i + 1 << " row is " << max << endl;
    }

    return 0;
}
