#include <iostream>

using namespace std;

void multiplyMatrices(int matrix1[][3], int matrix2[][2], int result[][2], int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {

    cout << "Tooba Farooq SE-009" << endl;

    int matrix1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << endl << "Matrix 1:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    int matrix2[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    cout << endl<<"Matrix 2:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    int rows1 = 2, cols1 = 3;
    int rows2 = 3, cols2 = 2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible due to incompatible dimensions." << endl;
        return -1;
    }

    int result[2][2];

    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);

    cout << endl << "Resultant Matrix:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
