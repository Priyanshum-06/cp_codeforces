// my initial sol
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int maxi = 0; 
//     int mini = 0;
//     vector<int> a(n);
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//     	cin >> a[i];
//     	mini = *min_element(a.begin(), a.end());
//         maxi = *max_element(a.begin(), a.end());
//     	if (mini) {
//     		if (mini < a[i - 1]) count++;
// 		}
// 		else if (maxi) {
// 			if (maxi > a[i - 1]) count++;
// 		}
// 	}
//     cout << count << '\n';
//     return 0;
// }


// chatgpt help sol
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;
    int mini = a[0];
    int maxi = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < mini) {
            count++;
            mini = a[i];
        } else if (a[i] > maxi) {
            count++;
            maxi = a[i];
        }
    }

    cout << count << '\n';
    return 0;
}
