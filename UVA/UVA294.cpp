//Divisors
#include <bits/stdc++.h> 
using namespace std; 
bitset<10000010>bs; //N até 10^7
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

int main() 
{ 
    sieve(35000);
	  long long n, u, l, maior, numdiv, num;
    cin >> n;
    while(n--) {
          maior=0;
          numdiv=0;
          cin >> l >> u;
      for(long long i=l;i<=u;i++){
              numdiv=numDiv(i);
              if(numdiv>maior){
                  maior=numdiv;
                  num=i;
              }
       }
       printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", l, u, num, maior);
    }
	  return 0; 
} 
