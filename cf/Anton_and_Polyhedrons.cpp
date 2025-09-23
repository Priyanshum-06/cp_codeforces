#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int face = 0;
    for (int i = 0; i < n; i++) {
    	string s;
    	cin >> s;
    	if (s == "Tetrahedron") face += 4;
    	else if (s == "Cube") face += 6;
    	else if (s == "Octahedron") face += 8;
    	else if (s == "Dodecahedron") face += 12;
    	else face += 20;
	}
	cout << face << '\n';
    return 0;
}