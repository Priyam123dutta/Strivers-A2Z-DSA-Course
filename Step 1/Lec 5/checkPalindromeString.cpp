#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    string check = s;

    /*
    for (int i = 0; i < check.length() / 2; i++) {
        swap(check[i], check[check.length() - i - 1]);
    }
    */
    reverse(check.begin(), check.end());

    if (s == check)
        return true;

    return false;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
