#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, res;
    cin >> n;
    if (n==1) {
        res = 4;
    }
    else if (n%2 == 0) res = (n/2 + 1) * (n/2 + 1);
    else res = (n + 1) * (n + 1) - 4;
    cout << res;
    return 0;
}