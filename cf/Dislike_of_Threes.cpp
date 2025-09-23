#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;

        int count = 0;
        int current = 1;

        while (true) {
            if (current % 3 != 0 && current % 10 != 3) {
                count++;
                if (count == k) {
                    cout << current << endl;
                    break;
                }
            }
            current++;
        }
    }
    return 0;
}
