#include <iostream>
using namespace std;

void reverseArray(int * arr, int size, int start) {
    if (start >= size / 2)
        return;

    swap(arr[start], arr[size - start - 1]);
    reverseArray(arr, size, ++start);
}

int main() {
    int size;
    cout << "Enter Array Size: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, size, 0);

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}