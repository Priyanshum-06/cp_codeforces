#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isHard = false;
    vector<int> feed(n);
    for (int i = 0; i < n; i++) {
        cin >> feed[i];
        if (feed[i] == 1) {
            isHard = true;
            break;
        }
    }
    if (isHard) {
    	cout << "Hard" << '\n';
	}
	else {
		cout << "Easy" << '\n';
	}
    return 0;
}