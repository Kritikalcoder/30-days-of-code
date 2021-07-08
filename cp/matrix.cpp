#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int T=1, i=1, j=1, k=1;
	int M=1, N=1;
	cin >> T;
	for (i=0; i<T; i++) {
		cin >> M;
		cin >> N;
		int num[M][N];
		for (j=0; j<M; j++) {
			for (k=0; k<N; k++) {
				cin >> num[j][k];
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
		int sum = 0;
		for (k=0; k<N; k++) {
			sum = 0;
			for(j=0;j<M;j++) {
				sum += num[j][k];
			}
			if (sum<=M/2) {
				for(j=0;j<M;j++) {
					if (num[j][k] == 1) num[j][k] = 0;
					else num[j][k] = 1;
				}
			}
		}
		sum = 0;
		for (j=0;j<M;j++) {
			for(k=0; k<N; k++) {
				sum += num[j][k] * pow(2,N-k-1);
			}
		}

		cout << sum << endl;

	}
}