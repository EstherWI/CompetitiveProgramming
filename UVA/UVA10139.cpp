//Factovisors
#include<bits/stdc++.h> 
using namespace std; 

long long get_powers(long long n, long long  p){
    long long res = 0;
    for (long long  power = p ; power <= n ; power *= p)
        res += n/power;
    return res;
}
bool factorize(long long n, long long fatorial) 
{ 
	int count = 0;
	bool ans = false;
    if(n == 0) return false;
    else if(n==1) return true;
    else if (fatorial >= n) return true;

	// count the number of times 2 divides 
	while (!(n % 2)) { 
		n >>= 1; // equivalent to n=n/2; 
		count++; 
	} 
	// if 2 divides it 
	if (count) 
        for(long long j=0;j<count;j++){
            if(get_powers(fatorial, 2)>=count) ans = true;
        	else return false;
        }    

	// check for all the possible numbers that can 
	// divide it 
	for (long long i = 3; i <= sqrt(n); i += 2) { 
		count = 0; 
		while (n % i == 0) { 
			count++; 
			n = n / i; 
		} 
		if (count) 
            for(long long j=0;j<count;j++){
                if(get_powers(fatorial, i)>=count) ans = true;
        		else return false;
            } 
	} 

	// if n at the end is a prime number. 
	if (n > 2){
        if(get_powers(fatorial, n)>=1) ans = true;
        else return false;
    }
	return ans;
} 

int main(){
    long long m, n;
    while(cin >> m >> n){
        if(factorize(n, m)) cout << n << " divides " << m << "!" << endl;
        else cout << n << " does not divide " << m << "!" << endl;
	}
    return 0;
}
