#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include <map>

int main () {
    int t, n, i, j, a;
    cin >> t;
    for (i=0; i<t; i++) {
        cout << "F1";
        cin >> n;
        int perm[2 * n];
        map<int,int> m;
        for (j=0; j<(2*n); j++) {
            cin >> perm[j];
        }
        // cout << perm;
        for (j=0; j<(2*n)-1; j++) {
            if (m.find(perm[j]) == m.end()) {
                cout << perm[j];
                m[perm[j]] = 1;
            }
        }
    }
    return 1;
}