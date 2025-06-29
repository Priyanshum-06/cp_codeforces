#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int current = 0, max_capacity = 0;
    
    while (t--) {
        int a, b;  // a = exit, b = enter
        cin >> a >> b;
        
        current = current - a + b;
        if (current > max_capacity) {
            max_capacity = current;
        }
    }
    
    cout << max_capacity;
    return 0;
}
