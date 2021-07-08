#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	long long int T=1, i=1, j=1, k=1;
	long long int M=1, N=1;
	cin >> T;
	for (i=0; i<T; i++) {
		cin >> M;
		cin >> N;
		long long int num[M][N];
		for (j=0; j<M; j++) {
			for (k=0; k<N; k++) {
				//cin >> num[j][k];
				num[j][k] = 1;
			}
		}

		for (j=0; j<M; j++) {
			if (num[j][0] == 0) {
				for (k=0; k<N; k++) {
					if (num[j][k] == 1) num[j][k] = 0;
					else num[j][k] = 1;
				}
			}
		}
		long long int sum = 0;
		for (k=1; k<N; k++) {
			sum = 0;
			for(j=0;j<M;j++) {
				sum += num[j][k];
			}
			if ((sum<=M/2 && M%2==1) || (sum<M/2 && M%2==0)) {
				for(j=0;j<M;j++) {
					if (num[j][k] == 1) num[j][k] = 0;
					else num[j][k] = 1;
				}
			}
		}
		sum = 0;
		for (j=0;j<M;j++) {
			for(k=0; k<N; k++) {
				sum += ((long long)num[j][k] * (((long long)1<<(long long)N-k-1)));
			}
		}

		cout << sum << endl;
	}
	return 0;
}
