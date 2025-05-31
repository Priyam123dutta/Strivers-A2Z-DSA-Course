#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


int largestElement(vector<int> nums) {
    int max = INT_MIN;
    for (auto i : nums) {
        if (i > max) max = i;
    }

    return max;
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

    cout << "The Largest Element in the array is: " << largestElement(nums);

    return 0;
}