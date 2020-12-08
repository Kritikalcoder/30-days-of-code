#include<bits/c++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a) cin >> it;
        sort(a.begin(), a.end(), greater<int>());
        int max_len = (int)log2(a[0])+1;
        vector<int> digits(max_len*n);
        for(int i = 0; i < a.size(); i++){
            //a[i]
            bitset<max_len>(a[i])
        }

    }
    return 0;
}