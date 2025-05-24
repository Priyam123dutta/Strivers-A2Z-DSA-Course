#include <iostream>
#include <unordered_map>
using namespace std;

int countFrequency(int *arr, int n, int key) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    if (mp.find(key) != mp.end()) {
        return mp[key];
    } 

    return 0;
}

int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key: ";
    cin >> key;

    int freq = countFrequency(arr, n, key);

    cout << "The frequency of " << key << " is " << freq;

    return 0;
}