#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;  
    int ans = n;
    while (k--) {
        if (ans % 10 != 0) {
            ans -= 1;
        }
        else {
            ans/= 10;
        }
    }
    cout << ans << '\n';
    return 0;
}