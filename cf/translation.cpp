#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str, str1;
    cin >> str >> str1;
    reverse(str.begin(), str.end());
    if (str1 == str) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    return 0;
}