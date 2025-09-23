#include <bits/stdc++.h>
using namespace std;
int main() {
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> el(n);
		bool found = false;
		for (int i = 0; i < n; i++) {
			cin >> el[i];
			if (el[i] == k) found = true;
		}
		cout << (found ? "YES" : "NO") << '\n';
	}
}
