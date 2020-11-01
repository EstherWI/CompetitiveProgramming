#include <bits/stdc++.h>
using namespace std; 
 
int main(){
	long long s, x, ans=0;
	cin>>s>>x;
    while(s>0){
        s/=x; 
        ans++;
    }
    if(ans==0) cout<<1<<endl;
    else cout<<ans<<endl;
}
