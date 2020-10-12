//Light, more light
#include <bits/stdc++.h> 
using namespace std;
 
int main(){    
    unsigned long int n, x;
    while(cin >> n && n!=0){
        x=sqrt(n);
        if(n==x*x) printf("yes\n");
        else printf("no\n");
    }
    
}
