#include <iostream>

using namespace std;

int* findMax(int* arr, int size) {
    int* maxElement = arr;
    for (int i = 0; i < size; i++) {
        if (arr[i] > *maxElement) {
            maxElement = &arr[i];
        }
    }
    return maxElement;  
}


int main() {
    cout << "Tooba Farooq SE-009" << endl;
    int arr[] = { 7,5,9,2,7,3,0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";   
    }

    int* maxElement=findMax(arr, size);

    cout << endl << "Maximum element: " << *maxElement;

    return 0;
}
