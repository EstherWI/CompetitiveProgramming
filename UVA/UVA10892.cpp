//LCM Cardinality
#include <bits/stdc++.h> 
using namespace std;
long gcd(long a, long b) { return b == 0 ? a : gcd(b, a % b); }

int main()
{   
    long long n, cont;
    while (cin >> n && n!=0)
    {
        cont = 0;
        long long  i, k,ans[2000],sq=sqrt(n), j=0;
        for(i = 1;i <= sq;i ++)
        {
            if( n % i == 0){
                ans[j++]=n/i;
                if(i*i != n) ans[j++]=i;
            }
        }
        long long aux=1;
        for(i = 0;i <j;i ++)
        {
            for(k = aux;k <j;k++)
            {
               if(gcd(ans[i],ans[k])==1)
                cont++;
            }
            aux++;
        }
        cout << n << " " << cont+1 <<endl;

    }
    return 0;
}
