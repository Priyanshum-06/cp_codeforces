#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char result[n];
    int count_d = 0;
    int count_a = 0;
    for (int i = 0; i < n; i++) {
        cin >> result[i];
        if (result[i] == 'D') {
            count_d++;
        }
        else {
            count_a++;
        }
    }
    if (count_a > count_d) {
        cout << "Anton" << '\n';
    }
    else if (count_a < count_d) {
        cout << "Danik" << '\n';
    }
    else {
        cout << "Friendship" << '\n';
    }
    return 0;
}