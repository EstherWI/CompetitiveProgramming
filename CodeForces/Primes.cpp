#include <bits/stdc++.h>
 
using namespace std; 
 
bool isPrime(int x){
	if (x < 2)return false;
	for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)return false;
	return true;
}
 
int main(){
	int n;
	cin>>n;
	if (isPrime(n - 2)) cout<<2<<" "<<n-2<<endl;
	else cout<<-1<<endl;
}
