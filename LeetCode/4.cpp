#include<bits/stdc++.h>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	double median;
	vector<int> merged;
	vector<int> num1(m);
	vector<int> num2(n);
	for (int i = 0; i < m; i++) {
		cin >> num1[i];
		merged.push_back(num1[i]);
	}
	for (int i = 0; i < n; i++) {
		cin >> num2[i];
		merged.push_back(num2[i]);
	}
	int q = merged.size();
	sort(merged.begin(), merged.end());
	if (q % 2 == 0) {  
			double ne1 = (q/2) - 1;
			double ne2 = q/2;
			median = (merged[ne1] + merged[ne2]) / 2.0;
		}        
		else {
			float no = q / 2;
			median = merged[no] / 2.0;
		}
		cout << median << '\n';      
   }                
  