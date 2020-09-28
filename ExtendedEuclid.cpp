#include<bits/stdc++.h> 
using namespace std; 
long long x, y, d;

void extendedEuclid(long long a, long long b) {
    if (b == 0) { x = 1; y = 0; d = a; return; } // base case
    extendedEuclid(b, a % b); // similar as the original gcd
    long long x1 = y;
    long long y1 = x - (a / b) * y;
    x = x1;
    y = y1;
}
