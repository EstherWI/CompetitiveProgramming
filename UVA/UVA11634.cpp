//Generate random numbers
#include <bits/stdc++.h> 
using namespace std;

	
int main(){
    long long a, n, cont;
    while(cin >> n && n!=0){
        cont=0;
        char m[10000];
        memset(m, 0, sizeof(m));
        while(m[n]==0){
            m[n] = 1;
            cont++;
            n = ((n * n / 100) % 10000);
        }
        cout << cont <<endl;
    }
    
}
