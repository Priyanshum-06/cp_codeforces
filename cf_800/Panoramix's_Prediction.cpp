#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    vector<int> primes;

    // Generate prime numbers between 1 and 50
    for (int i = 2; i <= 50; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) primes.push_back(i);
    }

    // Check if m is the next prime after n
    bool found = false;
    for (int i = 0; i < primes.size() - 1; ++i) {
        if (primes[i] == n && primes[i + 1] == m) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
