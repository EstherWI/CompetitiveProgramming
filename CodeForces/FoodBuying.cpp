#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  long long s, burles, gasto, x; 
  cin >>t;
  for(int i=0;i<t;i++)
  {
    gasto = 0;
    cin >> s;
    while (s>9) {
      gasto += s - (s % 10);
      s = s/10 + (s % 10);
    }            
    gasto += s;
    cout << gasto << endl; 
  }
  return 0;
}