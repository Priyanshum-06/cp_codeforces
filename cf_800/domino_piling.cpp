#include<bits/stdc++.h>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    cout << (m*n)/2;           // max no of dominoes as for 4 X 2 there are 8 cells and domino should place taking 2 squares
    return 0;                  // so max no should be 8/2 = 4 dominoes is the max.
}