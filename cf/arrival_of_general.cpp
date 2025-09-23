#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_height = *max_element(a.begin(), a.end());
    int min_height = *min_element(a.begin(), a.end());

    // First occurrence of max height (from the left)
    int max_index = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] == max_height) {
            max_index = i;
            break;
        }
    }

    // Last occurrence of min height (from the right)
    int min_index = 0;
    for(int i = n - 1; i >= 0; --i) {
        if(a[i] == min_height) {
            min_index = i;
            break;
        }
    }

    int moves = max_index + (n - 1 - min_index);
    if(max_index > min_index) {
        moves -= 1; // because min shifts right when max is moved first
    }

    cout << moves << endl;
    return 0;
}
