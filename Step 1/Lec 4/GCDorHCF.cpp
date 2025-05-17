#include <iostream>
using namespace std;

int naive(int num1, int num2) {
    int gcd = min(num1, num2);

    while (gcd > 0) {
        if (num1 % gcd == 0 && num2 % gcd == 0) {
            return gcd;
        }
        gcd--;
    }

    return gcd;
}

int eucledeanAlgo(int num1, int num2) {
    if (num2 == 0) 
        return num1;
    else
        eucledeanAlgo(num2, num1 % num2);
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int gcd1 = naive(num1, num2);
    cout << "GCD using Naive Approach: " << gcd1 << endl;

    int gcd2 = eucledeanAlgo(num1, num2);
    cout << "GCD using Eucledean's Algorithm: " << gcd2 << endl;

    return 0;
}