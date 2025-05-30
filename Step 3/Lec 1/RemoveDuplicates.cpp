#include <iostream>
#include <vector>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    int unique = 0;
    
    for (auto i : nums) {
        if (nums[unique] != i) {
            nums[++unique] = i;
        }
    }

    return unique + 1;
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

    int range = removeDuplicates(nums);

    cout << "The Unique Element array is: ";
    for (int i = 0; i < range; i++) {
        cout << nums[i] << " ";
    }

    cout << endl << "The current array is: ";
    for (auto i : nums) {
        cout << i << " ";
    }

    return 0;
}