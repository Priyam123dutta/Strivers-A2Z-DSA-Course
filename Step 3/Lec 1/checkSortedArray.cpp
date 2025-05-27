#include <iostream>
#include <vector>
using namespace std;


bool checkArray(vector<int> nums) {
        int checkBreak = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > nums[(i + 1) % nums.size()]) {
                checkBreak++;
            }
        }

        return checkBreak <= 1 ? true : false;
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

    if(checkArray(nums)) {
        cout << "The array is sorted";
    }
    else {
        cout << "The array is not sorted";
    }

    return 0;
}