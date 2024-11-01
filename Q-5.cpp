#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 24, 12, 20, 22};
    int size = 5;

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    size--;

    cout << "Array after deleting top item: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
