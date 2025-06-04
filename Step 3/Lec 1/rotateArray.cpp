#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void rotateArray(vector<int>& nums, int k) {
    k %= nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    int size, k;
    cout << "Enter Array Size: ";
    cin >> size;
    vector<int> nums(size);

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    cout << "Enter steps: ";
    cin >> k;

    rotateArray(nums, k);

    cout << "Rotated Array: ";
    for (int i : nums) {
        cout << i << " ";
    }
    
    return 0;
}