#include<bits/stdc++.h> 
using namespace std; 
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main(){
    
    long G, i, j, N;
    while(scanf("%ld", &N) && N!=0){
        G=0;
        for(i=1;i<N;i++)
            for(j=i+1;j<=N;j++)
            {
                G+=gcd(i,j);
            }
        printf("%ld\n", G);
    }
    return 0;
}
