#include <iostream>
// #include <memory>
// #include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> n;
        long long int b[n], res[n];
        int flag = n % 2; // even
        // int start = 0, end = n-1, temp, flag = 0;
        for (int j = 0; j<n; j++) {
            if (flag == 0) {
                // even
                if (j < n/2) {
                    cin >> b[2*j];
                }
                else {
                    cin >> b[2*(n-j) - 1];
                }
            }
            else {
                // odd
                if (j < (n+1)/2) {
                     cin >> b[2*j];
                }
                else {
                    cin >> b[2*(n-j) - 1];
                }

            }
        }
        for (int j = 0; j<n; j++) {
            cout << b[j] << " ";
        }
    }
    return 0;
}