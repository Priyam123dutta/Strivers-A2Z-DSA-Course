#include <iostream>
#include <limits.h>
using namespace std;

bool checkPalindrome(int num) {
    if (num < 0 || num % 10 == 0 && num != 0) // Negative numbers and numbers having trailing zeros can never be Palindrome
        return 0;

    int reverse = 0;
    while (num > reverse) {                 // Reverseing half of the number and comparing with the other half
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

        return num == reverse || num == reverse / 10; // Odd length numbers are divide by 10 for avoiding mismatch
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    bool pallindrome = checkPalindrome(num);

    if (pallindrome)
        cout << "Number is Palindrome";
    else 
        cout << "Number is not Palindrome";

    return 0;
}