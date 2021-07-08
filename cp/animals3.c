#include <stdio.h>

int main() {

	int T=1, N=1, max_spread=1;
	int i=0, j=0, k=0;
	int num[100001], spread[100001];

	scanf("%d", &T);

	for (i=0; i<T; i++) {

		scanf("%d", &N);
		max_spread = 1;

		for (j=0; j<N; j++) {
			scanf("%d", &num[j]);
			spread[j] = 1;
		}

		j = N - 1;
		while (j>0) {
			k = j-1;
			while(k>=0) {
				if (num[j] >= num[k]) {
					spread[j] += 1;
					k = k - 1;
					if (k==-1) {
						if (max_spread<spread[j]) max_spread = spread[j];
						j = k;
					}
				}
				else {
					if (max_spread<spread[j]) max_spread = spread[j];
					j = k;
					k = -1;
				}
			}
			
		}
		
		printf("%d\n",max_spread);
	}

	return 0;
}