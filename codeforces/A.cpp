#include <bits/stdc++.h>
using namespace std;

int factorial(int n) 
{  
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string r, b;
        cin >> r >> b;
        int R[n] = { 0 };
        int B[n] = { 0 };
        for (int i=0; i<n; i++) {
            R[i] = (int) r[i];
            B[i] = (int) b[i];
        }
        sort (R, R+n);
        sort (B, B+n);

        int red_count = 0, blue_count = 0;;
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                if (R[i] > B[j]) {
                    red_count += 1;
                }
                else if (R[i] < B[j]) {
                    blue_count += 1;
                }
            }
        }

        if (red_count == blue_count) cout << "EQUAL\n";
        else if (red_count >= blue_count) cout << "RED\n";
        else cout << "BLUE\n";
        
    }
    return 0;
}