#include <bits/stdc++.h>
using namespace std; 
 
int main(){
	int n;
	cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long zero[32];
    memset(zero, 0 , sizeof(zero));
    for(long long i = 0; i < 32; i++){
        for(long long j = 0; j < n; j++){
            if(!(a[j] & 1 << i))
                zero[i]++;
        }
    }
    long long ans = 0;
    for(long long i = 0; i < 32; i++){
       ans+=((pow(2, n) - 1)-(pow(2, zero[i])- 1))*pow(2, i);
    }
    cout<<ans<<endl;
}
