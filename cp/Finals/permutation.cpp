#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define lli long long int
#define slli(x) scanf("%lld",&x)
#define INF 1e18
#define debug(n1) cout << n1 << "\n"

int main() {

	lli T=0;
	cin >> T;
	lli i=0, n=1, p=1;
	for(i=0;i<T;i++) {
		cin >> n >> p;
		//lli diff = n-p;
		lli fact = 1;
		for(lli j=n;j>1;j--) {
			fact = (fact * (j%p)) % p;
		}
		cout << fact << "\n";
	}
	

	return 0;

}