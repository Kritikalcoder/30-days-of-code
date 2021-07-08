#include<bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int h[n];
        for (int i=0; i<n; i++) {
            cin >> h[i];
        }
        int flag = 1;
        for (int i=1; i<n; i++) {
            if (abs(h[i] - h[i-1]) >= 2*k - 1) {
                flag = 0;
                break;
            }
        }
        if (abs(h[0] - h[1]) == k || abs(h[n-1] - h[n-2]) == k) flag = 0;
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}