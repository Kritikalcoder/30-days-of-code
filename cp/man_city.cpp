//This is not the final solution. This solution is incomplete.

#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define lli long long int
#define slli(x) scanf("%lld",&x)
#define INF 1e18
#define debug(n1) cout << n1 << endl

bool isinside[]

    bool *visited = new bool[V];
    bool *recStack = new bool[V];
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
        recStack[i] = false;
    }
 
    for(int i = 0; i < V; i++)
        if (isCyclicUtil(i, visited, recStack))
            return true;
 
    return false;

    ////////////////

	if(visited[v] == false){
        visited[v] = true;
        recStack[v] = true;
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) )
                return true;
            else if (recStack[*i])
                return true;
        }
 
    }
    recStack[v] = false;
    return false;


int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	lli N=2, M=1, K=1;

	cin >> N >> M >> K;

	lli i=1, num[M+1][3], loc;

	for (i=1;i<=M;i++) {
		cin >> num[i][1] >> num[i][2];
	}

	vector<lli> adj[N+1]; 
	lli curloc=1;
	for (i=1;i<=M;i++) {
			adj[num[i][1]].push_back(num[i][2]);
			adj[num[i][2]].push_back(num[i][1]);
	}


	return 0;
}