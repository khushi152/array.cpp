#include <iostream>
using namespace std;

int main() {
    int arr[10] = {50, 70, 30, 60, 50};
    int n = 5;
    int position;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the position to delete the element (0 to " << n - 1 << "): ";
    cin >> position;

    if (position < 0 || position >= n) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}