#include <iostream>

using namespace std;

void revrseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + (size - 1);
    int temp;

    for (int i = 0; i < size/2; i++) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
}


int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int arr[] = { 1,2,3,4,5,6,7 };
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";   
    }
    cout << endl << "After reversing: ";

    revrseArray(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
