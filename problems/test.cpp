#include<iostream>
#include<bits/stdc++.h> 
using namespace std; 

int main (){
    int N;
    cin >> N;
    int x,y,z,i;
    for (i=0; i<N; i++) {
        cin >> x >> y >> z;
        if (x != y && y != z) {
            cout << "NO";
            return 1;
        }
        if (x==y && y==z) {
            cout << "YES\n";
            cout << x << x << x;
        }
        else if(x==y) {
            cout << "YES\n";
            cout << x << z << z-1;
        }
        else if (y==z) {
            cout << "YES\n";
            cout << x-1 << y << x;
        }
        else {
            // if (x==z)
            cout << "YES\n";
            cout << y << x << y-1;
        }

    }
    return 1;
}