#include <iostream>
using namespace std;

void Bottom(int arr[], int &size, int capacity, int newItem) {
    if (size >= capacity) {
        cout << "Array is full" << endl;
        return;
    }
    arr[size] = newItem;
    size++;
}

void Array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int capacity = 10;
    int arr[capacity];
    int size;
    cout << "Enter the number of elements in the array (max " << capacity << "): ";
    cin >> size;

    if (size > capacity) {
        cout << "Size exceeds capacity!" << endl;
        return 1;
    }
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int newItem;
    cout << "Enter the new item to insert at the bottom: ";
    cin >> newItem;
    Bottom(arr, size, capacity, newItem);
    cout << "Array after inserting " << newItem << " at the bottom: ";
    Array(arr, size);

    return 0;
}
