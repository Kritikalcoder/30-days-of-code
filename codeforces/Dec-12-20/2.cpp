#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res = "2020";
        string pf1 = s.substr(0,1);
        string pf2 = s.substr(0,2);
        string pf3 = s.substr(0,3);
        string pf4 = s.substr(0,4);
        string pof4 = s.substr(n-4,4);
        string pof3 = s.substr(n-3,3);
        string pof2 = s.substr(n-2,2);
        string pof1 = s.substr(n-1,1);
        if (!s.compare(res) || !pf4.compare(res) || !pof4.compare(res) ||
            (!pf1.compare("2") && !pof3.compare("020")) ||
            (!pf2.compare("20") && !pof2.compare("20")) ||
            (!pf3.compare("202") && !pof1.compare("0"))
        ){
            cout << "YES\n";
            continue;
        }
        else {
            cout << "NO\n";
            continue;
        }
        
    }
    return 0;

}