#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define lli long long int
#define slli(x) scanf("%lld",&x)
#define INF 1e18
#define debug(n1) cout << n1 << "\n"

int main() {

		lli n=1,m=1,k=1;
		cin >> n >> m >> k;

		std::map<int,int> first;
		// solution incomplete
		lli i=0, num[n];
		for(i=0;i<n;i++) {
			cin >> num[i];
			first[i]=0;
		}

		std::map<int,int> quant;

		lli l[m], r[m], d[m];
		for(i=0;i<m;i++) {
			cin >> l[i] >> r[i] >> d[i];
			quant[i] = 0;
		}

		lli x[k], y[k];
		for(i=0;i<k;i++) {
			cin >> x[i] >> y[i];
			for (lli j=x[i]-1; j<y[i]; j++) {
				// j is the operation index
				quant[j] += 1;
			}
		}

		for (i=0;i<m;i++) {
			if(quant[i]>0) {
				lli temp = quant[i];
				for (lli k=l[i]-1; k<r[i]; k++) {
					// k is the num index
					num[k] += d[i]*temp;
				}
			}
		}

		for (i=0;i<n;i++) {
			cout << num[i] << " ";
		}


		return 0;
}