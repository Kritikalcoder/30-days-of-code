#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, res, upper;
        cin >> n;
        int rem = n%2520;
        upper = n + 2520 - rem;
        int digits = log10(n);
        for (int i=n; i<=upper; i++) {
            int flag = 1;
            int num = i;
            int digit = num % 10;
            num = num / 10;
            if (digit != 0 && i%digit) {
                flag = 0;
            }
            while(digits && flag) {
                digits --;
                digit = num % 10;
                num = num / 10;
                if (digit != 0 && i%digit) {
                    flag = 0;
                    break;
                }
            }
            if (flag) res = i;
        }
        cout << res << endl;
    }

    return 0;
}