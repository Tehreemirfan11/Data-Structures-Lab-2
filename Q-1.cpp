#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Number of elements in the array: ";
    cin >> num;

    int arr[num];
    cout << "Elements of the array:\n";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    for (int i = 1; i < num; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}
