//Back to Intermediate Math
#include <bits/stdc++.h> 
using namespace std;

	
int main(){    
    double d,v,u,t1,t2;
    int n, caso=0;
    
    cin>>n;
    while(n--){
        cin>>d>>v>>u;
        caso++;
        if(v>=u || u==0 || v==0){
            printf("Case %d: can't determine\n",caso);
            continue;
        }
        t1=d/u;
        t2=d/sqrt(u*u-v*v);
        printf("Case %d: %.3lf\n",caso,fabs(t2-t1));
    }

}
