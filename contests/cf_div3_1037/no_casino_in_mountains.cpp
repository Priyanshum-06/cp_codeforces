// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         int w[n];
//         int ans = 0;
//         int cnt = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> w[i];
//         }
//         // traversing through the weathers
//         for (int i = 0; i < n; i++) {
//             while (cnt <= k) {
//                 if (w[i] == 0) {
//                     cnt++;
//                     ans++;
//                 }
//             }
//             continue;
//         }
//         cout << ans << '\n';
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int w[n];
        for (int i = 0; i < n; i++) {
            cin >> w[i];
        }
		int ans = 0;
		int cnt = 0;
		while (cnt <= n-k) {
			bool canHike = true;
			for (int j = 0; j < k; j++) {
				if (w[cnt+j] != 0) {
					canHike = false;
					break;
				}
			}
			if (canHike) {
				ans++;
				cnt += k + 1;       // skip the k days for hiking plus 1 rest day
			}
			else {
				cnt++;
			}
		}
		cout << ans << '\n';
    }
    return 0;
}
