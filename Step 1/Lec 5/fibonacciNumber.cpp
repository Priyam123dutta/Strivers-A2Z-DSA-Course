#include <iostream>
#include <vector>
using namespace std;

/*
Using Loop

int fibonacci(int n) {
    vector<int> fib;
    
    fib.push_back(0);
    fib.push_back(1);
    
    for (int i = 1; i <= n; i++) {
        fib.push_back(fib[i - 1] + fib[i]);
    }
    
    return fib[n];
}
*/

// Using Recursion

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }

    return fibonacci(n - 2) + fibonacci(n - 1);
}


int main() {
    int n;
    cout << "Enter the position of the Fibonacci sequence: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << endl;

    return 0;
}