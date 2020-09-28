#include<bits/stdc++.h> 
using namespace std; 
long long x, y, d, g;

void fatorial(int n)
{
    int i,j,temp,m,x;
    int a[3000];
    a[0]=1;
    m=1;

    temp = 0;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<m;j++)
        {
            x = a[j]*i+temp;
            a[j]=x%10;
            temp = x/10;
        }
        while(temp>0)
        {
            a[m]=temp%10;
            temp = temp/10;
            m++;
        }
    }
    printf("%d!\n",n);
    for(i=m-1;i>=0;i--)
    printf("%d",a[i]);
    printf("\n");
}

int main(){
    
    int N;
    while(cin>>N){
        fatorial(N);
    }
    return 0;
}
