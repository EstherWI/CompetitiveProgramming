#include <bits/stdc++.h> 
using namespace std; 
// function to calculate all the prime factors and 
// count of every prime factor 
long long factorize(long long n, vector<long long> &primes) 
{ 
	int count = 0; 
	// count the number of times 2 divides 
	while (!(n % 2)) { 
		n >>= 1; // equivalent to n=n/2; 
		count++; 
	} 
	// if 2 divides it 
	if (count)
		for(long long k=0;k<count;k++) 
			primes.push_back(2);

	// check for all the possible numbers that can 
	// divide it 
	for (long long i = 3; i <= sqrt(n); i += 2) { 
		count = 0; 
		while (n % i == 0) { 
			count++; 
			n = n / i; 
		} 
		if (count)
			for(long long k=0;k<count;k++)
				primes.push_back(i);
	} 

	// if n at the end is a prime number. 
	if (n > 2) 
		primes.push_back(n);
	return n; 
} 

int main() 
{ 
	long long n,x;
	long long factorize(long long n, vector<long long> &primes);
	while(scanf("%lld", &n)&&n!=0) {
		vector<long long> primes;
		if(n==1) printf("%lld = ", n);
		else{
			if(n<0){
			x=factorize(n*-1, primes);
			printf("%lld = -1 x ", n);
			}
			else{
				x=factorize(n, primes);
				printf("%lld = ", n);
			}
			if(x==n) printf("%lld ", n);
			else
			for(long long i=0; i < primes.size(); i++){
				std::cout << primes.at(i);
				if(i<primes.size()-1) cout << " x ";
			}

		}
   			 
		cout << endl;

	}
	return 0; 
}
