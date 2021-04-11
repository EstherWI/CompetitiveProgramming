#include <bits/stdc++.h>
 
using namespace std;
 
int main  () {
 
  long long int t, n, m, x, resp, linha, coluna, o;
  cin>>t;
  while (t--) {
	  cin>>n>>m>>x;
	  x=x-1;
	  linha=x/n;
	  coluna=x%n;
	  cout<<coluna*m + linha + 1<<endl;
 }
  return 0;
}
