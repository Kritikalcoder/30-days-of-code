#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define lli long long int
#define slli(x) scanf("%lld",&x)
#define INF 1e18
#define debug(n1) cout << n1 << "\n"
#define VAL 1000000007

lli square(lli n)
{
    // Base case
    if (n==0) return 0;
    // Handle negative number
    if (n < 0) n = -n;
    // Get floor(n/2) using right shift
    int x = n>>1;
    // If n is odd
    if (n&1)
        return ((square(x)<<2) + (x<<2) + 1);
    else // If n is even
        return (square(x)<<2);
}

int main() {
	
	lli N, L, R, Q, i, j, typ;
	cin >> N >> Q;
	lli num[N] = {0};
	for (i=0;i<Q;i++) {
		cin >> typ >> L >> R;
		if (typ == 1) {
			for (j=R; j>=L; j--) {
				num[j] = ( num[j] + square(j-L+1)%VAL ) %VAL;
				//(A^B)%mod=(A^(B%(mod-1)))%mod
				//(a-b)%x=(a%x-b%x+x)%x;
			}
		}
		else if (typ == 2) {

			lli sum = 0;
			for (j=R; j>=L; j--) {
				sum = (sum + num[j])%VAL;
			}
			cout << sum << "\n";
		}
	}


	return 0;
}