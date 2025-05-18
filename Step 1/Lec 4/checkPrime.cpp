#include <iostream>
using namespace std;

bool checkPrime(int num) {
    if (num < 2) 
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }

    return true;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Number is " << (checkPrime(num) ? "Prime" : "not Prime");

    return 0;
}