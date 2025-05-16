#include <iostream>
using namespace std;

int countDigits(int num) {
    int digitCount = 0;
    while (num) {
        num /= 10;
        digitCount++;
    }

    return digitCount;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int digitNumber = countDigits(num);
    cout << "Number of digits are: " << digitNumber;

    return 0;
}

