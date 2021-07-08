#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define lli unsigned long long int
#define slli(x) scanf("%lld",&x)
#define INF 1e18
#define debug(n1) cout << n1 << "\n"

lli primeNoGreaterThan(lli N) {
	if (N==1) return 0;
    lli i,j,winner=0;
    lli temp = 5 * N;
    bool primes[temp];
    primes[0] = primes[1] = 0;

    for(i = 2; i <= N; ++i) 
        primes[i] = 1;

    for(i = 2; i <= N; ++i) {
        if(primes[i]) {
            winner = i;
            for(j = i+i; j <= N; j += i) 
                primes[j] = 0;
        }
    }

    return winner;
}

bool isPrime(lli n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;
 
    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
 
    return true;
}


int main() {

	lli t=1;
	cin >> t;
	lli i=0, n=0;
	for(i=0;i<t;i++) {
		cin >> n;
		lli flag=1, val=0, temp=n;

		if(n%2==0 && n>2){
			val = 2;
			flag=0;
		}
		if(n==2){
			flag=0;
			val=1;
		}
		if(n%2==1 && isPrime(n)){
			flag = 0;
			val = 1;
		}
		/*else if(n%2==1) {
			flag=0;
			val=3;
		}*/
		
		while(flag) {
			
			lli num = primeNoGreaterThan(temp);
			//cout << "num " << num;
			if (num>=2) { 
				if (num==temp) {
					flag=0;
				}
				temp = temp - num;
				val += 1;
				//cout << "a";
			}
			else {
				flag=0;
				val += 1;
				//cout << "b";
			}
		}

		cout << val << "\n";
	}
	return 0;

}

