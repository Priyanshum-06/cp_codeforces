/** 
  *     author: pmcoder1729
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), 
    cin.tie(0);
    // finding the largest element in an array
    // Brute force approach 
    // sorting the arr --> using sort function for sorting
    vector<int> arr = {10, 20, 33, 41, 5}; 
    sort(arr.begin(), arr.end());
    int maxi = arr[arr.size() - 1];
    cout << maxi << '\n';

    // optimized approach
	int maxi = arr[0];
	for (int i = 0; i < arr.size(); i++) {
		if (maxi < arr[i]) maxi = arr[i];
	}
	cout << maxi << '\n';
    return 0;
}