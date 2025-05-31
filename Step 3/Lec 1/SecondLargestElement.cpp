#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


int SecondlargestElement(vector<int> nums) {
    int max = INT_MIN, secMax = INT_MIN;
    for (auto i : nums) {
        if (i > max) max = i;
    }

    for (auto i : nums) {
        if (i > secMax && i < max) secMax = i;
    }

    return secMax;
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

    cout << "The Second Largest Element in the array is: " << SecondlargestElement(nums);

    return 0;
}