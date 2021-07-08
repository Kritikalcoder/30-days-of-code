#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define lli long long int
#define slli(x) scanf("%lld",&x)
#define INF 1e18
#define debug(n1) cout << n1 << "\n"

int main() {

	lli N=1, x=2, y=3, i=0, j=0, k=0;
	cin >> N >> x >> y;
	lli num[N], x_list[N], label[N];
	lli delta = y - x;
	for(i=0;i<N;i++) {
		cin >> num[i];
		x_list[i] = x - num[i];
		label[i] = -1;
	}

	lli flag = 1;

	for(i=0;i<N;i++) {
		for(j=i;j<N;j++) {
			if ((num[i] == x_list[j]) && (num[j] == x_list[i])) {
				if (label[i] == -1 && label[j] == -1) {
					label[i] = 0;
					label[j] = 0;
				}
				else if (label[i] == -1 && label[j] == 1) {
					// find y - num[i]
					lli temp = y - num[i];
					for (k=j+1;k<N;k++) {
						if (num[k] == temp && label[k] == -1) {
							label[k] = 1;
							label[i] = 1;
						}
						else {
							flag = 0;
						}
					}
				}
				else if (label[i] == 1 && label[j] == -1) {
					// find y - num[j]
					lli temp = y - num[j];
					for (k=i+1;k<N;k++) {
						if (num[k] == temp && label[k] == -1) {
							label[k] = 1;
							label[j] = 1;
						}
						else {
							flag = 0;
						}
					}
				}
				else if (label[i] == 1 && label[j] == 1);
				
			}
			else if ((num[i] == x_list[j] + delta) && (num[j] == x_list[i] + delta)) {
				if (label[i] == -1 && label[j] == -1) {
					label[i] = 1;
					label[j] = 1;
				}
				else if (label[i] == -1 && label[j] == 0) {
					// find x - num[i]
					lli temp = x - num[i];
					for (k=j+1;k<N;k++) {
						if (num[k] == temp && label[k] == -1) {
							label[k] = 1;
							label[i] = 1;
						}
						else {
							flag = 0;
						}
					}
				}
				else if (label[i] == 0 && label[j] == -1) {
					// find x - num[j]
					lli temp = x - num[j];
					for (k=i+1;k<N;k++) {
						if (num[k] == temp && label[k] == -1) {
							label[k] = 1;
							label[j] = 1;
						}
						else {
							flag = 0;
						}
					}
				}
				else if (label[i] == 0 && label[j] == 0);
			}
		}
	}

	

	for(i=0;i<N;i++) {
		if (label[i] == -1) flag = 0;
	}


	if (flag==1) {
		cout << "Yes\n";
		for (i=0;i<N;i++) cout << label[i] << " ";
	}
	else cout << "No\n";

	return 0;
}