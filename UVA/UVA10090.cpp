//Marbles
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

int main() {
    long long n, n1, n2, c1, c2;
    while( cin >> n && n!=0){
        cin >> c1 >> n1 >> c2 >> n2;
        extendedEuclid(n1,n2);
        if(n%d) {
            cout<<"failed"<<endl;
        }
        else{
            long long t1 = (long long)ceil(-(double)x*n/n2);
            long long t2 = (long long)floor((double)y*n/n1);
            if( t2 < t1 )
            cout << "failed\n";
            else{
                long long cost1 = (n/d)*(c1*x+c2*y)+t1*(c1*n2-c2*n1)/d;
                long long cost2 = (n/d)*(c1*x+c2*y)+t2*(c1*n2-c2*n1)/d;
                long long t;
                if( cost1 < cost2 ) t = t1;
                else t = t2;
                    long long k1 = (x*n + n2*t)/d;
                    long long k2 = (y*n - n1*t)/d;
                    cout << k1 << " " << k2 << "\n";
            }
        }
    }
    return 0;
}
