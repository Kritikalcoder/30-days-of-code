#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define lli long long int
#define slli(x) scanf("%lld",&x)
#define INF 1e18
#define debug(n1) cout << n1 << endl

int main() {
	ios::sync_with_stdio(false);
	//cin.tie(0);
	lli N=2, M=1, K=1;

	cin >> N >> M >> K;

	lli i=1, num[M+1][3], loc;

	for (i=1;i<=M;i++) {
		cin >> num[i][1] >> num[i][2];
	}

	lli array[N+1], flag[M+1] = {0};

	for (i=1;i<=N;i++) {
		array[i] = i;
		cout << array[i] << " ";
		
	}
	cout << "\n";

	for (i=1;i<=M;i++) {

		lli index1 = num[i][1];
		lli index2 = num[i][2];

		lli temp = array[index1];
		array[index1] = array[index2];
		array[index2] = temp;

		if (array[index1] == 1) {
			flag[i] = 1;
			loc = index1;

		}
		else if (array[index2] == 1) {
			flag[i] = 1;
			loc = index2;
		}

		/*for(lli j=1;j<=N;j++) {
			cout << array[j] << " ";
		}
		if (flag[i] == 1) cout << "Yes ";
		else cout << "No ";
		cout << "\n";*/
	}

	lli constraint = 0;
	if (loc==K) {
		for (i=1;i<=M;i++) {
			if (flag[i]!=1) {
				constraint = i;
				break;
			}
		}
	}
	else {
		for (i=M; i>=1; i--) {
			if (flag[i]==1) {
				lli index1 = num[i][1];
				lli index2 = num[i][2];

				lli temp = array[index1];
				array[index1] = array[index2];
				array[index2] = temp;

				if (array[K] == 1) {
					constraint = i;
					break;
				}
				else {
					lli temp = array[index1];
					array[index1] = array[index2];
					array[index2] = temp;
				}
			}
		}
	}

	/*cout << "\n";
	for(i=1;i<=N;i++) {
		cout << array[i] << " ";
	}
	cout << "\n";*/
	cout << constraint << "\n";

	return 0;
}