#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    float drinks[n];
    float sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> drinks[i];
        sum +=  (drinks[i]/100)/n;
    }
    cout << 100*sum << '\n';
    return 0;
}
