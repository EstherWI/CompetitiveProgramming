//Largest Prime Divisor
#include <bits/stdc++.h> 
using namespace std; 

// function to calculate all the prime factors and 
// count of every prime factor 
long long factorize(long long n) 
{ 
	int count = 0; 
	long long largest=0, x = n, c=0;

	// count the number of times 2 divides 
	while (!(n % 2)) { 
		n >>= 1; // equivalent to n=n/2; 
		count++;
	} 

	// if 2 divides it 
	if (count){
		largest=2; 
		c++;
	} 
		

	// check for all the possible numbers that can 
	// divide it 
	for (long long i = 3; i <= sqrt(n); i += 2) { 
		count=0;
		while (n % i == 0) { 
			count++; 
			n = n / i;
		} 
		if (count>0 && i>largest){
			largest=i;
			c++;
		}
	} 
	// if n at the end is a prime number. 
	if (n > 2) 
		if(n>largest){
			largest=n;
			c++;
		}
	if(largest<=2 || x==n || c<=1) return -1;
	return largest;
} 

int main() 
{ 
	long long n;
	while(scanf("%lld", &n)&&n!=0) {
		if(n<0) printf("%lld\n", factorize(n*-1));
		else printf("%lld\n", factorize(n));
	}
	return 0; 
}
