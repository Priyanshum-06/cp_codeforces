#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, h;
    cin >> n >> h;
    int person[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> person[i];
        if (person[i] > h) {
            person[i] = 2;
            sum += person[i];
        }
        else {
            person[i] = 1;
            sum += person[i];
        }
    }
    cout << sum << '\n';
    return 0;
}