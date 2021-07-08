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
	std::map<lli,lli> valToIndex;

	for(i=0;i<N;i++) {
		cin >> num[i];
		lli temp = num[i];
		x_list[i] = x - num[i];
		label[i] = -2;
		valToIndex[temp] = i;
	}

	lli flag = 1;

	for(i=0;i<N;i++) {
		lli val = num[i];
		lli comp1 = x - num[i];
		lli comp2 = y - num[i];

		if (label[i]==-2) {
			if ( valToIndex.count(comp1) <= 0) {
				//not found
				if ( valToIndex.count(comp2) <= 0) {
					//not found
					label[i] = -1;
					break;
				} 

				else {
					//found
					lli temp2 = valToIndex[comp2];
					if(label[temp2] == -2) {
						label[i] = 1;
						label[temp2] = 1;
					}
					else {
						label[i] = -1;
						break;
					}
					
				}
			} 

			else {
				//found
				if ( valToIndex.count(comp2) <= 0) {
					//not found
					lli temp1 = valToIndex[comp1];
					if(label[temp1] == -2) {
						label[i] = 0;
						label[temp1] = 0;
					}
					else {
						label[i] = -1;
						break;
					}
				} 

				else {
					//found
					lli temp1 = valToIndex[comp1];
					lli temp2 = valToIndex[comp2];
					lli temp_x = x - comp2;
					lli temp_y = y - comp1;


					if (valToIndex.count(temp_x) <= 0) {
						if (valToIndex.count(temp_y) <= 0) {

							if(label[temp1] == -2) {
								label[i] = 0;
								label[temp1] = 0;
								label[temp2] = -1;
							}
							else if (label[temp2] == -2) {
								label[i] = 1;
								label[temp1] = -1;
								label[temp2] = 1;
							}
							else {
								label[i] = -1;
								break;
							}
							
						}

						else {

							if(label[temp1] == -2 && label[temp2]== -2 && label[temp_y] == -2) {
								label[i] = 1;
								label[temp2] = 1;

								label[temp1] = 1;
								label[temp_y] = 1; 
							}
							else {
								label[i] = -1;
								break;
							}
							
						}
					}

					else {
						if (valToIndex.find(temp_y) == valToIndex.end() ) {

							if(label[temp1] == -2 && label[temp2]== -2 && label[temp_x] == -2) {
								label[i] = 0;
								label[temp1] = 0;

								label[temp2] = 0;
								label[temp_x] = 0;
							}
							else {
								label[i] = -1;
								break;
							}
						}

						else {
							// recursively do the same thing as above
							lli f=0;
						}
					}

				}
			}
		}
		
	}

	for(i=0;i<N;i++) {
		if (label[i] == -1) {
			flag = 0;
			break;
		}
	}


	if (flag==1) {
		cout << "Yes\n";
		for (i=0;i<N;i++) cout << label[i] << " ";
	}
	else cout << "No\n";

	return 0;
}