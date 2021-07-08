#include<bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int r[n];
        for (int i=0; i<n; i++) {
            cin >> r[i];
        }
        int m;
        cin >> m;
        int b[m];
        for (int i=0; i<m; i++) {
            cin >> b[i];
        }

        int p1 = 0, p2 = 0;
        int sum = 0;
        int max_sum = 0;
        while (p1 < n && p2 < m) {
            if (r[p1] >= b[p2]) {
                sum += r[p1];
                p1 += 1;
            }
            else {
                sum += b[p2];
                p2 += 1;
            }
            if (sum > max_sum) {
                max_sum = sum;
            }
        }

        while (p1 < n) {
            sum += r[p1];
            p1 += 1;
            if (sum > max_sum) {
                max_sum = sum;
            }
        }

        while (p2 < m) {
            sum += b[p2];
            p2 += 1;
            if (sum > max_sum) {
                max_sum = sum;
            }
        }

        cout << max_sum << endl;
    }

    return 0;
}