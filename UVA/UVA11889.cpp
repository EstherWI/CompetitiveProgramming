//Benefit
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

int main(){
    long long t, A, B, C, i,t1,t2;
    sieve(10000000);
    cin >> t;
    while(t--){
        cin >> A >> C;
        B=1;
        if(C%A==0){
           for(i = 0; i < primes.size() && primes[i]*primes[i] <= C; i++){
                if(C%primes[i] == 0) {
                t1 = 1, t2 = 1;
                while(C%primes[i] == 0)
                    C /= primes[i], t1 *= primes[i];
                while(A%primes[i] == 0)
                    A /= primes[i], t2 *= primes[i];
                if(t1 > t2)
                    B *= t1;
                }
            }
            if(C != 1 && A == 1)
                B *= C;
            cout <<B<<endl;
        }
        else cout <<"NO SOLUTION"<<endl;
    }
}
