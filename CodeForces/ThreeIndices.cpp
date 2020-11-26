#include <bits/stdc++.h>
using namespace std; 

int main() {
  int t, n;
  bool x;
  cin>>t;
  while(t--){
    cin>>n;
    int v[n];
    x=false;
    for (int i = 0; i < n; i++)
		cin >> v[i];
    for (int i = 1; i < n - 1; i++) {
      if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
        cout << "YES" << endl;
        cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
        x=true;
        break;
      }
    }
    if(!x)
	    cout << "NO" << endl;
  }
}
