//Odd Sum
#include <bits/stdc++.h> 
using namespace std;

int main(){    
    int t, a, b, sum, caso=1,i;
    cin >> t;
    while(t--){
        cin >> a >>b;
        sum=0;
        if(a%2!=0) i=a;
        else i=a+1;
        for(i;i<=b;i+=2){
            sum+=i;
        }
        cout << "Case "<< caso<<": "<< sum <<endl;
        caso++;
    }  
}
