//Pseudo-Random Numbers
#include <bits/stdc++.h> 
using namespace std;
int Z, I, M, L;

int f(int x0){
    int x = (Z*x0+I)%M;
    return x;
}
std::pair<int, int> floydCycleFinding(int x0) { // function int f(int x) is defined earlier
    // 1st part: finding k*mu, hare’s speed is 2x tortoise’s
    int tortoise = f(x0), hare = f(f(x0)); // f(x0) is the node next to x0
    while (tortoise != hare) { tortoise = f(tortoise); hare = f(f(hare)); }
    // 2nd part: finding mu, hare and tortoise move at the same speed
    int mu = 0; hare = x0;
    while (tortoise != hare) { tortoise = f(tortoise); hare = f(hare); mu++;}
    // 3rd part: finding lambda, hare moves, tortoise stays
    int lambda = 1; hare = f(tortoise);
    while (tortoise != hare) { hare = f(hare); lambda++; }
    return std::make_pair(mu, lambda);
}
int main()
{
    int c = 0;
    while(cin>>Z>>I>>M>>L && L!=0)
    {
        std::pair<int, int> p = floydCycleFinding(L);
        cout <<"Case "<< ++c << ": "<<p.second <<endl;
    }
 
    return 0;
}
