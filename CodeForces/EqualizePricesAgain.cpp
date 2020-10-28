#include<bits/stdc++.h> 
 
using namespace std;
 
int main() {
    int q, n;
    
    cin>>q;
    while(q--){
        cin>>n;
        long long sum, a;
        sum=0;
        for(long long i=0;i<n;i++){
            cin>>a;
            sum+=a;
        }
        if(sum % n == 0)
            cout<<sum/n<<endl;
        else
            cout<<sum/n+1<<endl;
        
    }
}
