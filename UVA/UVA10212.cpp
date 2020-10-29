//The Last Non-zero Digit.
#include<bits/stdc++.h> 

using namespace std;

int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        if(b==0) cout<<1<<endl;
        else
        {
            long long ans=1;
            long long c=a-b+1;
            for(long long i=a;i>=c;i--)
            {
                ans*=i;
                while(ans%10==0)
                    ans/=10;

                ans%=1000000000;

            }
            cout<<ans%10<<endl;
        }
    }
    return 0;
}
