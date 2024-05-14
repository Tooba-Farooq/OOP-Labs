#include <iostream>


using namespace std;

void removeDuplicate(int* arr, int* size) {
    int* p = arr;
    for (int i = 0; i < *size; i++) {
        for (int j = i+1; j < *size; j++) {
            if (*p==arr[j]) {
                for (int k = j; k < *size; k++) {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
            }
        }
        p++;
    }
}

int main() {
    int arr[] = { 1,2,3,2,1,4 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int* sizep = &size;
 

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    removeDuplicate(arr, sizep);

    cout << "After removing duplicates: " << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    return 0;
}
