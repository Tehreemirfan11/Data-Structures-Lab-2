#include <iostream>
using namespace std;

void Location(int arr[], int &size, int capacity, int newItem, int loc) {
    if (size >= capacity) {
        cout << "Array is full" << endl;
        return;
    }
    if (loc < 0 || loc > size) {
        cout << "Invalid location!" << endl;
        return;
    }
    for (int i = size; i > loc; i--) {
        arr[i] = arr[i - 1];
    }
    arr[loc] = newItem;
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
    int newItem, loc;
    cout << "Enter the new item to insert: ";
    cin >> newItem;
    cout << "Enter the location to insert the new item (0 to " << size << "): ";
    cin >> loc;
    Location(arr, size, capacity, newItem, loc);
    cout << "Array after inserting " << newItem << " at location " << loc << ": ";
    Array(arr, size);

    return 0;
}
