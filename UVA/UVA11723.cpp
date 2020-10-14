//Numbering Roads
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    long long road, numbers, ans, caso=1;
    while (cin >>road>>numbers && road!=0 && numbers!=0)
    {
        ans=(road-1)/numbers;
        if(ans>26) cout << "Case " <<caso<<": impossible"<<endl;
        else cout << "Case " <<caso<<": "<<ans<<endl;
        caso++;
    }
}
