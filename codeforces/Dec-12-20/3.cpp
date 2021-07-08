#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int sad = -1;
        int digits[10] = {0,0,0,0,0,0,0,0,0,0};
        if (x > 45) {
            cout << sad << endl;
            continue;
        }
        else if (x < 10) {
            cout << x << endl;
            continue;
        }
        else {
            int temp = x, dig = 9;
            while (temp >= dig && dig > 0) { 
                temp -= dig;
                digits[dig] = 1;
                dig -= 1;
            }
            if (temp) digits[temp] = 1;
            long long int num = 0;
            for (int i=1; i<10; i++) {
                if (digits[i]) {
                    num = (num * 10) + i;
                }
            }
            cout << num << endl;
        }
    }
    return 0;
}