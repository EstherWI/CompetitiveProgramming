//Prime Land
#include <bits/stdc++.h> 
using namespace std; 
// function to calculate all the prime factors and 
// count of every prime factor 
void factorize(long long n, vector<long long> &v) 
{ 
	int count = 0; 

	// count the number of times 2 divides 
	while (!(n % 2)) { 
		n >>= 1; // equivalent to n=n/2; 
		count++; 
	} 

	// if 2 divides it 
	if (count){
        v.push_back(count);
        v.push_back(2);
    }

	// check for all the possible numbers that can 
	// divide it 
	for (long long i = 3; i <= sqrt(n); i += 2) { 
		count = 0; 
		while (n % i == 0) { 
			count++; 
			n = n / i; 
		} 
		if (count){
            v.push_back(count);
            v.push_back(i);
        }
	} 

	// if n at the end is a prime number. 
	if (n > 2){
        v.push_back(1);
        v.push_back(n);
    }
} 
int main() 
{ 
    long long x, base, exp;
    double m;
    string line;

    while(getline(cin,line)){
       std::vector<long long> v;
       if(line=="0") break;
       x=1;
       istringstream ss(line);
       while(ss>>base){
            ss>>exp;
            m=pow(base,exp);
            x=x*m;
            ceil(x);
       }
       factorize(x-1, v);
       for(long long i=v.size()-1;i>=0;i--){
            cout << v[i];
            if(i>0) cout << " ";
       }
        cout << endl;
	}
	return 0; 
} 
