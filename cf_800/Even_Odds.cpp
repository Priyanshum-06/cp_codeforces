#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;   // --> 10, 3 ==> 5

    vector<int> merged;      // creating a vector container for storing the values given by the for loop

    // taking odd num from 1 to 10    ---> 1, 3, 5, 7, 9
    for (int i = 1; i <= n; i+=2) {
        merged.push_back(i);
    }
        
    // taking even nums from 1 to 10 ----> 2, 4, 6, 8, 10
    for (int i = 2; i <= n; i+=2) {
        merged.push_back(i);
    }

//     By combining---> 1, 3, 5, 7, 9, 2, 4, 6, 8, 10
//     for (int x : merged) {
//        cout << x << " "; 
//    }
    
    cout << merged[k-1];
	
	return 0;
}