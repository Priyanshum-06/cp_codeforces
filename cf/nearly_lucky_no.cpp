#include<bits/stdc++.h>
using namespace std;

int main() {
    long long num;
    cin >> num;
    int cnt = 0;
    
    while (num > 0) {
        int digit = num % 10;
        if (digit == 4 || digit == 7) {
            cnt++;
        }
        num /= 10;
    }
    
    if (cnt == 4 || cnt == 7) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    
    return 0;
}
