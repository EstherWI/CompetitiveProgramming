#include <bits/stdc++.h> 
using namespace std;

	
int main(){
	int t;
    long long n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(n==k || (n%2==0 && k==0)) cout << 0 <<endl;
        else if(k-n>0) cout << k-n <<endl;
        else{
            cout << (k+n)%2 <<endl;
        }
    }

}
