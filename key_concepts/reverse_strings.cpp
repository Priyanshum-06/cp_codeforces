// using the  reverse function in algorithm --> most efficient
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;
    return 0;
}

// using a loop(manual swapping)
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }

    cout << "Reversed string: " << str << endl;
    return 0;
}

// using a new string
#include <iostream>
using namespace std;

int main() {
    string str, reversed = "";
    cout << "Enter string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    cout << "Reversed string: " << reversed << endl;
    return 0;
}




