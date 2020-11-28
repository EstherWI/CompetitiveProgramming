#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  long long x, n;
  while(t--){

    cin>>n>>x;
    long long a[n], cont=0, i, j, n1;
    for(i=0;i<n;i++)
      cin>>a[i];
    sort(a, a+n, greater<long>());
    n1=1;
    for(i=0;i<n;i++){
      if(a[i]*n1>=x){
        cont++;
        n1=0;
      }
      n1++;
    }
    cout<<cont<<endl;

  }
}
