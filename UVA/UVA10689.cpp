//Yet another Number Sequence
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long t, pisano[] = {0, 60, 300, 1500, 15000},pow10[] = {1, 10, 100, 1000, 10000};
    
    long long a, b, n, m;
    cin >>t;
    while(t--){
        cin >> a >> b >> n >> m;
        n%=pisano[m];
        a %= pow10[m];
        b %= pow10[m];
        long long *F = new long long[pisano[m]];
        F[0]=a;
        F[1]=b;
        for( long long i = 2; i < pisano[m] && i <= n; ++i )
            F[i] = ( F[i-1] + F[i-2] ) % pow10[m];
        cout << F[n] <<endl;
    }
}
