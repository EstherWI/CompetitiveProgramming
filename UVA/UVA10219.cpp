//Finding the Ways !
#include <bits/stdc++.h> 
using namespace std;
// log(C(n, k)) = log(n!/(n - k)!k!) //Quantidade de dígitos da combinação
//              = log(n!) - log((n - k)!k!)
//              = log(n!) - log((n - k)!) - log(k!)
//              = log(n!)/log(k!) - log((n - k)!)

int main()
{   
    unsigned long long n, k;
    while (cin >> n >> k)
    {
        long double sum = 0;
        for (unsigned long long i = n - k + 1; i <= n; ++i)
            sum += log10((double)i);
        for (unsigned long long i = 1; i <= k; ++i)
            sum -= log10((double)i);

        cout << (int) sum + 1<< endl;
    }
    return 0;
}
