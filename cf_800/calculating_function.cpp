#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    
    long long even = n / 2;
    long long odd = n - even;

    long long result = even * (even + 1) - odd * odd;

    cout << result << '\n';
    return 0;
}


