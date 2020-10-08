//Flavius Josephus Reloaded
#include <bits/stdc++.h> 
using namespace std;
long long N,A,B,n;

long long f(long long x0){
    long long x = (A*(x0*x0%N)%N + B)%N;;
    return x;
}
std::pair<long long, long long> floydCycleFinding(long long x0) { // function long long f(long long x) is defined earlier
    // 1st part: finding k*mu, hare’s speed is 2x tortoise’s
    long long tortoise = f(x0), hare = f(f(x0)); // f(x0) is the node next to x0
    while (tortoise != hare) { tortoise = f(tortoise); hare = f(f(hare)); }
    // 2nd part: finding mu, hare and tortoise move at the same speed
    long long mu = 0; hare = x0;
    while (tortoise != hare) { tortoise = f(tortoise); hare = f(hare); mu++;}
    // 3rd part: finding lambda, hare moves, tortoise stays
    long long lambda = 1; hare = f(tortoise);
    while (tortoise != hare) { hare = f(hare); lambda++; }
    return std::make_pair(mu, lambda);
}
int main()
{
    while(cin >> N, N)
    {
        cin >> A >> B;
        n = 0;
        std::pair<long long, long long> p = floydCycleFinding(n);
        cout << N-p.second <<endl;
    }
 
    return 0;
}
