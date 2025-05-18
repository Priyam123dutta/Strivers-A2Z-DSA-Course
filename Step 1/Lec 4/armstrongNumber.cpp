#include <iostream>
#include <cmath>
using namespace std;

// function for finding power of a base to the exponent
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

//counting the digit number for calculation exponent
int nDigits(int num) {
    int count = 0;
    while (num) {
        count++; num /= 10;
    }

    return count;
}

//function for checking Armstrong Number
bool checkArmstrong(int num) {
    int armsNum = 0, temp = num, digits = nDigits(num);

    while (temp) {
        armsNum += power(temp % 10, digits);
        temp /= 10;
    }

    return num == armsNum;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (checkArmstrong(num))
        cout << "Number is an Armstrong Number";
    else
        cout << "Number is not an Armstrong Number";

    return 0;
}