#include <iostream>
using namespace std;

int main() {
    int arr[6] = {0, 1, 0, 1, 0, 1};
    int n = 6;
    int left = 0, right = n - 1;

    while (left < right) {
        while (arr[left] == 0 && left < right)
            left++;
        while (arr[right] == 1 && left < right)
            right--;
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    cout << "Array after segregation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}