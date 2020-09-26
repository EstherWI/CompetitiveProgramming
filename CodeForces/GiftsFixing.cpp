#include <bits/stdc++.h>
using namespace std; 
 
 
int main()
{
    int t, n, i, j, m;
    
    scanf("%d", &t);
    for(i=0;i<t;i++){
        scanf("%d", &n);
        m=n;
        long long a[n], b[n], mina=1e18, minb=1e18, x, y;
        for(j=0;j<n;j++){
            cin >> a[j],mina=min(mina,a[j]);
        }
        for(j=0;j<n;j++){
            cin >> b[j], minb=min(minb,b[j]);
        }
        long long cont=0;
        for(int k=0;k<m;k++){
            x=a[k]-mina;
            y=b[k]-minb;
            cont+=max(x,y);
        }
        printf("%lld\n", cont);
    }
    return 0;
}
