#include <iostream>
using namespace std;

int main() {
    int n, index;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the index to search (0 to " << n - 1 << "): ";
    cin >> index;

    if (index >= 0 && index < n) {
        cout << "Element at index " << index << " is " << arr[index] << endl;
    } else {
        cout << "Invalid index!" << endl;
    }

    return 0;
}
