//Riemann vs Mertens
#include <iostream>
#include <vector>
#include <bitset>
#include <iomanip>

using namespace std;
#define max(a,b) (a>b?a:b)
vector<int> m(1000001),fact(1000001);
vector<int> prime;
void calc(){
    m[1]=1;
    int tmp=1000000;
    for(int i=2;i<=tmp;i++){
        if(fact[i]==0){
            prime.push_back(i);
            for(int j=i;j<=tmp;j+=i)
                    fact[j]++;
        }

    }
    for(int i=0;prime[i]<=1e3;i++){
        long long j=prime[i]*prime[i];
        long long k=j;
        for(;j<=1e6;j+=k)
            fact[j]=-2;
    }
}
int main(){
    calc();
    ios::sync_with_stdio(0);
    int n;
    for(int i=2;i<1e6+1;i++){
        if(fact[i]==-2)
            m[i]=0;
        else if(fact[i]&1)
            m[i]=-1;
        else
            m[i]=1;
        m[i]+=m[i-1];
    }
    while(cin>>n&&n){
        cout<<fixed<<setw(8)<<n<<setw(8)<<(m[n]-m[n-1])<<setw(8)<<m[n]<<endl;
    }
}
