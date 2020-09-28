#include<bits/stdc++.h> 
using namespace std; 
long long x, y, d, g;

long long mod(long long B, long long P, long long M)
{
    if(P==0) return 1;
    
    if(P%2==0)
    {
        int x=mod(B,P/2,M);
        return (x*x)%M;
    }
    else return (B%M * mod(B,P-1,M))%M;
}

int main(){
    
    long long B, P, M;
    while(cin>>B>>P>>M){
        cout << mod(B,P,M) << endl;
    }
    
    return 0;
}
