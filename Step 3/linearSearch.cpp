#include <iostream>
#include <vector>
using namespace std;


int linearSearch(vector<int> nums, int search) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == search) return i; 
    }

    return -1;
}

int main() {
    int size;
    cout << "Enter Array Size: ";
    cin >> size;
    vector<int> nums(size);

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    int search;
    cout << "Enter the number to search: ";
    cin >> search;

    int index = linearSearch(nums, search);

    cout << "The number is present at index number: " << index;

    return 0;
}