#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 14, 21, 28, 35};
    int size = 5;

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1]; 
    }
    size--;

    cout << "Array after deleting bottom item: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
