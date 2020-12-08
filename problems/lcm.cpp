#include<bits/stdc++.h>
using namespace std;
// #include <boost/math/common_factor.hpp> 
int gcd(int a, int b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int l,r, flag = 0;
        cin >> l >> r;
        int x = l, y = l+1;
        if (r == l + 1) {
            if (x == 1) cout << x << y;
            else cout << -1 << -1;
            continue;
        }
        while (x < r+1) {
            if (lcm(x,y) <= r) {
                cout << x << y;
                flag = 1;
                break;
            }
            else {
                if (y == r) {
                    x += 1;
                    y = x+1;
                }
                else y += 1;
            }
        }
        if (!flag) cout << -1 << -1;
    }
    return 1;
}