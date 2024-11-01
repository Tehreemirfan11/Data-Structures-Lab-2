#include <iostream>
using namespace std;

int main() {
    int n, index, newValue;

    cout << "Number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the index: ";
    cin >> index;
    cout << "Enter the new value: ";
    cin >> newValue;

    if (index >= 0 && index < n) {
        arr[index] = newValue;
        cout << "New Array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Wrong Index." << endl;
    }

    return 0;
}
