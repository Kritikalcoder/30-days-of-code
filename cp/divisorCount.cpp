#include <iostream>
using namespace std;
#include<bits/stdc++.h>
 
// Function to calculate gcd of two numbers
long int gcd(long int a, long int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

long int commDiv(long int a, long int b)
{
    // find gcd of a,b
    long int n = gcd(a, b);
 
    // Count divisors of n.
    long int result = 0;
    for (long int i=1; i<=sqrt(n); i++)
    {
        // if 'i' is factor of n
        if (n%i==0)
        {
            // check if divisors are equal
            if (n/i == i)
                result += 1;
            else
                result += 2;
        }
    }
    return result;
}
 
// Driver program to run the case
int main()
{
    long int a = 1, b = 1;
    cin >> a;
    cin >> b;
    cout << commDiv(a, b);
    return 0;
}