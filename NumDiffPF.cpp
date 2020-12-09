#include <bits/stdc++.h> 
using namespace std; 
//Primes from Sieve
long long numDiffPF(long long N) {
    long long PF_idx = 0, PF = primes[PF_idx], ans = 0;
    while (PF * PF <= N) {
    if (N % PF == 0) ans++; // count this pf only once
    while (N % PF == 0) N /= PF;
    PF = primes[++PF_idx];
    }
    if (N != 1) ans++;
    return ans;
}
