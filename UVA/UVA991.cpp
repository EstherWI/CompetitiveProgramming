//Safe Salutations
#include <bits/stdc++.h> 
using namespace std;
long long comb(int n, int k){
    long long fat1 =1, fat2=1;
    for(int i=2;i<=k;i++){
        fat1*=i;
    }
    for(int i=n;i>k;i--){
        fat2*=i;
    }
    return fat2/fat1;
}
int main(){    
    int n, c=0;
    while(cin >> n){
        if(c>0)
        {
            printf("\n"); 
        }
        c++;
        cout << comb(2*n,n)/(n+1) <<endl;
    }
    
}
