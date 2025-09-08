/** 
  *     author: pmcoder1729
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), 
    cin.tie(0);
    int num;
    cin >> num;
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < num; i++) {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;
    }
    if (x == 0 && y == 0 && z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
