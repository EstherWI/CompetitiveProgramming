//Factoring Large Numbers
#include <bits/stdc++.h> 
using namespace std; 

void factorize(long long n) 
{  
	while (!(n % 2)) { 
		cout << "    " << 2 << endl;
		n >>= 1; // equivalent to n=n/2; 
	} 
	// check for all the possible numbers that can 
	// divide it 
	for (long long i = 3; i <= sqrt(n); i += 2) { 
		while (n % i == 0) { 
			n = n / i;
			cout << "    " << i << endl; 
		} 
				
	} 
	// if n at the end is a prime number. 
	if (n > 2)
		cout << "    " << n << endl; 
}
int main() 
{ 
	long long t;
	while(cin >> t && t!=-1) {
		factorize(t);
		cout << endl;

	}
	return 0; 
}
