#include <bits/stdc++.h> 
using namespace std; 

long long numDiv(long long N) {
  long long PF_idx = 0, PF = primes[PF_idx], ans = 1; // start from ans = 1
  while (PF * PF <= N) {
  long long power = 0; // count the power
  while (N % PF == 0) { N /= PF; power++; }
  ans *= (power + 1); // according to the formula
  PF = primes[++PF_idx];
  }
  if (N != 1) ans *= 2; // (last factor has pow = 1, we add 1 to it)
  return ans;
}
