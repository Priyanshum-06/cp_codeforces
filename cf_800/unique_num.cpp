#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin >> str;
	unordered_set<char> s;
    for (int i = 0; i < str.size(); i++) {
        s.insert(str[i]);
    } 
    cout << s.size() << endl;
}