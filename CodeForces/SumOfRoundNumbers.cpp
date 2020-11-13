#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    long long n, t, i, x, c[5];
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=10;
        i=0;
        while(n!=0){
            if(n%x!=0){
                c[i]=n%x;
                i++;
            }
            n-=n%x;
            x*=10;
        }
        cout<<i<<endl;
        for(int j=0;j<i;j++){
            cout<<c[j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}
