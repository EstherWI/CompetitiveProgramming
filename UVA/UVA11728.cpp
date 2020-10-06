//Alternate Task
#include <bits/stdc++.h> 
using namespace std; 

long long sumDiv(long long x)
{
    if(x == 1) return 1;
    long long  i,ans = 1,sq=sqrt(x);
    for(i = 2;i <= sq;i ++)
    {
        if( x % i == 0)
            if(i*i == x) ans+=i;
            else ans+=i+x/i;
    }
   return ans+x;
}
int main() 
{ 
    int n, m[1001], c;
    memset(m,-1,sizeof m);
    for(int i=1;i<=1000;i++){
        n = sumDiv(i);
        if(n<=1000) m[n]= i;
    }
    c=1;
    while(cin >> n && n!=0)
        printf("Case %d: %d\n",c++,m[n]);
	return 0; 
} 
