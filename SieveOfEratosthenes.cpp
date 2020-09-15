#include <bits/stdc++.h>
#include<vector>
using namespace std; 
bitset<0000010>bs;
std::vector<long long>primes;

void sieve(long long upperbond){
    bs.set();
    bs[0]=bs[1]=0;

    for(long long i=2; i<=upperbond;i++)
        if(bs[i]){
            for(long long j=i*i;j<=upperbond;j+=i) 
                bs[j]=0;
            primes.push_back((long long)i);
        }
}
