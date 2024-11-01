#include <iostream>
using namespace std;

void insert(int arr[], int &size, int newItem) {
    int newArr[size + 1];
    newArr[0] = newItem;
    for (int i = 0; i < size; i++) {
        newArr[i + 1] = arr[i];
    }
    for (int i = 0; i <= size; i++) {
        arr[i] = newArr[i];
    }
    size++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int capacity = 10;
    int arr[capacity] = {1, 2, 3, 4, 5};
    int size = 5; 
    cout << "Original array: ";
    printArray(arr, size);

    int newItem = 10;
    insert(arr, size, newItem);

    cout << "Array after inserting " << newItem << " at the top: ";
    printArray(arr, size);

    return 0;
}
