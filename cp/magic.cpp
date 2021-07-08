#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define lli long long int
#define slli(x) scanf("%lld",&x)
#define INF 1e18
#define debug(n1) cout << n1 << "\n"

int main() {

	lli T = 1, i=0;
	string num;
	int Ncount=1, Lcount=1, Ucount=2,j=0;
	int N[1024], L[1024], U[1024];

	for (i=0;i<T;i++) {

		cin >> num;
		Ncount = num.size();
		Lcount = Ncount;
		Ucount = Ncount + 1;
		
		for (j=0;j<Ncount;j++) {
			N[j]=num[j]-'0';
		}

		// Find the first non zero decimal place in N
		int nonZero = 0;
		while (N[nonZero] == 0) {
			nonZero += 1;
		}

		cout << "1";
		for (j=nonZero + 1; j<Ncount; j++) {
			cout << "0";
		}
		cout << " ";

		cout << "1";
		for (j=nonZero + 1; j<Ncount; j++) {
			cout << "0";
		}
		cout << "0\n";

		/*for (j=0;j<Ncount;j++) {
			if (j==nonZero) {
				L[j] = 1;
				U[j] = 1;
			}
			else {
				L[j] = 0;
				U[j] = 0;
			}
		}

		U[Ncount] = 0;*/

	}

	return 0;
}