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

	lli i=1, num[M+1][3], index[M+1][3], loc;

	for (i=1;i<=M;i++) {
		cin >> index[i][1] >> index[i][2];
	}

	lli array[N+1];
	lli flag[M+1] = {0};

	for (i=1;i<=N;i++) {
		array[i] = i;
		//cout << array[i] << " ";
		
	}
	//cout << "\n";

	for (i=1;i<=M;i++) {

		lli index1 = index[i][1];
		lli index2 = index[i][2];

		lli temp = array[index1];
		array[index1] = array[index2];
		array[index2] = temp;

		num[i][1] = array[index1];
		num[i][2] = array[index2];

		if (array[index1] == 1) {
			flag[i] = 1;
			loc = index1;

		}
		else if (array[index2] == 1) {
			flag[i] = 1;
			loc = index2;
		}
	}

	std::map<int,int> valToIndex;

	for (i=1;i<=N;i++) {
		lli temp = array[i];
		valToIndex[temp] = i;
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
				lli a,b;
				a = num[i][1];
				b = num[i][2];

				lli loc1, loc2;
				loc1 = valToIndex[a];
				loc2 = valToIndex[b];

				if ((a==1 && loc2==K) || (b==1 && loc1==K)) {
					constraint = i;
				}

			}

			/*if (flag[i]==1) {
				lli index1 = index[i][1];
				lli index2 = index[i][2];

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
			}*/
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