#include <iostream>
using namespace std;

int main() {

	int T=1, N=1, max_spread=1;
	int i=0, j=0, k=0;
	int num[100001], spread[100001];

	cin >> T;

	for (i=0; i<T; i++) {

		cin >> N;
		max_spread = 1;

		for (j=0; j<N; j++) {
			cin >> num[j];
			spread[j] = 1;
		}

		j = N - 1;
		while (j>0) {
			k = j-1;
			while(k>=0) {
				if (num[j] >= num[k]) {
					spread[j] += 1;
					k = k - 1;
				}
				else {
					if (max_spread<spread[j]) max_spread = spread[j];
					j = k;
					k = -1;
				}
			}

			if (j==1 || j==0) break;
			
		}
		
		cout << max_spread << endl;
	}

	return 0;
}