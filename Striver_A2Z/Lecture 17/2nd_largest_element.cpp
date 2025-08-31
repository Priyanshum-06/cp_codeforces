#include<bits/stdc++.h>

using namespace std;

int main() {
	// finding the 2nd largest element in an array 
	vector<int> arr = {10, 20, 33, 41, 41};
	// better
	int largest = arr[0];
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}
	cout << largest << '\n';
	int slargest = -1;
	for (int i = 0; i < arr.size(); i++) {
		if (slargest < arr[i] && arr[i] != largest) {
			slargest = arr[i];
		}
	}
	cout << slargest << '\n';

    // Optimal approach 
    int largest = arr[0];
	int slargest = -1;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > largest) {
			slargest = largest;
			largest = arr[i];
		}
		else if (arr[i] < largest && arr[i] > slargest) {
			slargest = arr[i];
		}
	}
	cout << slargest << '\n';
}