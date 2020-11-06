//Relatives
#include <bits/stdc++.h> 
using namespace std; 

long long EulerPhi(long long n) {
	long long result = n;
	long long i;
	for ( i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}

main() {
    long long n;
    while (cin>>n && n!=0) {
        if(n==1) cout<<0<<endl;
        else cout<<EulerPhi(n)<<endl;
    }
}
