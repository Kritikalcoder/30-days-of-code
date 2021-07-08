#include<bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
        char start = s[0];
        char end = s[n-1];
        if (n%2 == 1 || start == ')' || end == '(') {
            cout << "No\n";
            continue;
        }
        else {
            cout << "Yes\n";
            continue;
        }
    }

    return 0;
}