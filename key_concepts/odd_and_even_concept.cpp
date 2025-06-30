// for calculating sum of even nums ---> use n*(n+1) 
// for calculating sum of odd nums ---->  use n*n

#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;                   // from problem --> 486A - Calculating Function
    cin >> n;                      // if n = 4 or if n = 5
    
    long long even = n / 2;        // f(4) =  - 1 + 2 - 3 + 4 = 2   f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3
    long long odd = n - even;

    long long result = even * (even + 1) - odd * odd;

    cout << result << '\n';
    return 0;
}


