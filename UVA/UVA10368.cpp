//Euclid's Game
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) && (a!=0 && b!=0))
    {
        bool st=true;
        while(a!=0 && b!=0)
        {
            if(b>a) swap(a, b);
            if(a/b>1 || a%b==0)
            {
                break;
            }
            else {
                a%=b;
                if(st) st =0;
                else st=1;
            }
        }
        if(st) printf("Stan wins\n");
        else printf("Ollie wins\n");
    }
 
    return 0;
}
