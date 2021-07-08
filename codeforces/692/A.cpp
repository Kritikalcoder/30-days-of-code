#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 0) {
            cout  << "No\n";
            return 0;
        }
        string S;
        cin >> S;
        int mid;
        if (n%2 == 1) mid = (n-1) / 2;
        else mid = n / 2 - 1;
        int bad = 1;
        for (int i=mid; i < n; i++) {
            if (S[i] != ')') {
                bad = 0;
                break;
            }
        }
        if (bad) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}