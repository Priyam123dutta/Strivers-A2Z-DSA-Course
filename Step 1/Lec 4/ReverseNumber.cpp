#include <iostream>
#include <limits.h>
using namespace std;

int reverseNumber(int num) {
    int reverseNum = 0;

    while (num) {
        int digit = num % 10;
        num /= 10;

        if (reverseNum > INT_MAX / 10 || reverseNum == INT_MAX / 10 && digit > INT_MAX % 10) return 0;
        if (reverseNum < INT_MIN / 10 || reverseNum == INT_MIN / 10 && digit < INT_MIN % 10) return 0;

        reverseNum = reverseNum * 10 + digit;
    }

    return reverseNum;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int digitNumber = reverseNumber(num);

    if (digitNumber)
        cout << "Reversed number is: " << digitNumber;
    else 
        cout << "Rversed number is Out of Bound of 4 Byte Integer Size";

    return 0;
}