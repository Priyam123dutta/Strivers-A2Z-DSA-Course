#include <iostream>
#include <vector>
using namespace std;

vector<int> divisors(int num) {
    vector<int> divs;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            divs.push_back(i);
    }
    
    return divs;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    vector<int> divs = divisors(num);

    cout << "Divisors are: ";
    for (int i : divs) {
        cout << i << " ";
    }

    return 0;
}