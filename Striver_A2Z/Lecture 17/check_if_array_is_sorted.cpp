#include<bits/stdc++.h>

using namespace std;

int main() {
	// check if array is sorted
	vector<int> arr = {1, 1, 2, 2, 2, 3, 3};
	for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= arr[i - 1]) {

        }
        else {
            cout << "False" << '\n';
        }
    }
    cout << "True" << '\n';
    return 0;
}