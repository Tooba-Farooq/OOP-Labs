#include <iostream>
using namespace std;

class Matrix {
public:
    static const int SIZE = 2;
private:
    int mat[SIZE][SIZE];

public:
    Matrix() {
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                mat[i][j] = 0;
    }

    Matrix(int arr[SIZE][SIZE]) {
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                mat[i][j] = arr[i][j];
    }

    Matrix operator * (const Matrix& other) {
        Matrix result;
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                result.mat[i][j] = 0;
                for (int k = 0; k < SIZE; ++k) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }

    void display() {
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    cout << "Tooba Farooq SE-009" << endl;

    int arr1[Matrix::SIZE][Matrix::SIZE] = { {1, 2}, {3, 4} };
    int arr2[Matrix::SIZE][Matrix::SIZE] = { {2, 0}, {1, 2} };

    Matrix mat1(arr1);
    Matrix mat2(arr2);

    Matrix mat3 = mat1 * mat2;

    cout << "Matrix 1:" << endl;
    mat1.display();

    cout << endl << "Matrix 2:" << endl;
    mat2.display();

    cout << endl << "Matrix 1 x Matrix 2:" << endl;
    mat3.display();

    return 0;
}
