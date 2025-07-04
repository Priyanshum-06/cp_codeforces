// my initial solution
//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//    int n, m;
//    cin >> n >> m;
//    for (int i = 1; i < n; i++) {
//        for (int j = 1; j < m; j++) {
//            if (i % 3 == 0) cout << "#";
//            else if (i % 2 == 0) {
//                if (j < m) cout << ".";
//                else cout << "#";
//            }
//        }
//    }
//    return 0;
//}


// after taking help of chatgpt
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            // Full row of '#'
            for (int j = 1; j <= m; j++) {
                cout << "#";
            }
        } else if (i % 4 != 0) {
            // Row ends with '#'
            for (int j = 1; j <= m - 1; j++) {
                cout << ".";
            }
            cout << "#";
        } else {
            // Row starts with '#'
            cout << "#";
            for (int j = 2; j <= m; j++) {
                cout << ".";
            }
        }
        cout << "\n";
    }
    return 0;
}


// 3 x 3    
// ###          
// ..#
// ###


// 9 x 9
// #########
// ........#
// #########
// #........
// #########
// ........#
// #########
// #........
// #########

