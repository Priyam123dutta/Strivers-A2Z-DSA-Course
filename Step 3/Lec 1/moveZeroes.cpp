#include <iostream>
#include <vector>
using namespace std;


void moveZeroes(vector<int>& nums) {
    int unique = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[unique++]);
        }
    }
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

    moveZeroes(nums);

    cout << "The modified array: ";
    for (auto i : nums) {
        cout << i << " ";
    }

    return 0;
}