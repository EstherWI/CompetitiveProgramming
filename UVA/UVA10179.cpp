//Irreducable Basic Fractions
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

int main() 
{ 
    long long n;
    while(cin >> n && n!=0){
        cout << EulerPhi(n) << endl;
    }
	return 0; 
} 
