#include <iostream>
using namespace std;

int main() {

	int T=1, N=1, max_spread=1, max_spread_flag=0;
	int i=0, j=0, k=0, m=0;
	int num[100001], spread[100001], spread_flag[100001];

	cin >> T;

	for (i=0; i<T; i++) {

		cin >> N;
		max_spread = 1;

		for (j=0; j<N; j++) {
			cin >> num[j];
			spread[j] = 1;
			spread_flag[j] = 1;
		}

		for (j=N-1; j>0; j--) {

			for (k=j-1; k>=0; k--) {
				if(spread_flag[j] == 1) {
					if (num[j] >= num[k]) {
						spread[j] += 1;
					}
					else spread_flag[j] = 0;
				}
				else break;
			}

			for(m=0; m<spread[j]; m++) {
				spread_flag[m] = 0;
			}

			if(spread[j] == j+1){
				max_spread = spread[j];
				break;
			}

			if(max_spread<spread[j]) max_spread = spread[j];
		}	
		
		cout << max_spread << endl;
	}

	return 0;
}