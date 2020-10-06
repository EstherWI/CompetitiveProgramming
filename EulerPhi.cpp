#include <bits/stdc++.h> 
using namespace std; 
//EulerPhi(N): Count the number of positive integers < N that are relatively prime
//to N
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
