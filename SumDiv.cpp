//Sum the divisors of X
long long sumDiv(long long x)
{
    if(x == 1) return 1;
    long long  i,ans = 1,sq=sqrt(x);
    for(i = 2;i <= sq;i ++)
    {
        if( x % i == 0)
            if(i*i == x) ans+=i;
            else ans+=i+x/i;
    }
   return ans+x;
}
