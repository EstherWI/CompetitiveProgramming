#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
  int m;
  cin>>m;
  int na, da, nb, db, n, d;
	char o;
  
  while(m--){
    scanf("%d / %d %c %d / %d", &na, &da, &o, &nb, &db);
    if(o=='+'){
      n = (na*db + nb*da);
      d = (da*db);
      cout<< n << '/' << d <<" = " <<n/__gcd(n, d)<<'/' << d/__gcd(n,d)<<endl;
    }
    else if(o=='-'){
      n = (na*db - nb*da);
      d = (da*db);
      if((n > 0 && d > 0) || (n < 0 && d < 0))
				cout << n << '/' << d << " = " << n/__gcd(n, d) << '/' << d/__gcd(n,d) << endl;
			else
				cout << '-' << abs(n) << '/' << abs(d) << " = -" << abs(n/__gcd(n, d)) << '/' << abs(d/__gcd(n,d)) << endl;
    }
    else if(o=='*'){
      n=na*nb;
      d=da*db;
      cout<<n<<'/'<<d<<" = " << n/__gcd(n, d) << '/' << d/__gcd(n,d) << endl;
    }
    else{
      n=na*db;
      d=nb*da;
      cout<<n<<'/'<<d<<" = " << n/__gcd(n, d) << '/' << d/__gcd(n,d) << endl;
    }
    
  }
    
 
  return 0;
}
