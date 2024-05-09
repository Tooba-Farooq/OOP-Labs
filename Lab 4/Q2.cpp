#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void revrseArray(int* arr, int size) {
    int* p = arr;
    for (int i = size-1 ; i >= 0; i--) {
        cout << *(p + i) << " ";
    }
}


int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int arr[] = { 1,2,3,4 };
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";   
    }
    cout << endl << "After reversing: ";
    revrseArray(arr, size);
    
    return 0;
}
