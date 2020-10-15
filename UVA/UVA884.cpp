//Factorial Factors
#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000001
bool isPrime[MAXN];
int ans[MAXN];
vector<int> prime;

void Sieve() {
    memset(isPrime, true, MAXN);
    isPrime[0] = isPrime[1] = false;
    for (int i=2, lm=(int)sqrt(MAXN); i<=lm; i++)
        if (isPrime[i]) {
            for (int j=i*i; j<=MAXN; j+=i)
                isPrime[j] = false;
            prime.push_back(i);
        }
    for (int i=prime.back()+1; i<=MAXN; i++)
        if (isPrime[i]) prime.push_back(i);
}
void solve() {
    ans[1] = 0;
    for (int i=2; i<MAXN; i++) {
        ans[i] = ans[i-1];
        int n=i, j=0;
        while (!isPrime[n]) {
            if (n%prime[j]==0) {
                ans[i]++;
                n /= prime[j];
            }
            else j++;
        }
        if (isPrime[n]) ans[i]++;
    }
}

int main(){
    int n;
    Sieve();
    solve();
    while(cin>>n){
        cout << ans[n] <<endl;
    }
}
