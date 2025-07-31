#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    // taking n nums --> 10
    for (int i = 1; i <= n; i++) {
        // taking odd num from 1 to 10    ---> 1, 3, 5, 7, 9
        for (int i = 1; i <= n; i+=2) {
            cout << i << ' ';
        }
        
        // taking even nums from 1 to 10 ----> 2, 4, 6, 8, 10
        
    }
    return 0;
}