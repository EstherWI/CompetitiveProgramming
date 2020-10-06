#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
	int n;
    long long r[3];
    cin >> n;
	while(n--) {
        cin >> r[0] >> r[1] >> r[2];
        sort(r,r+3);
        if(r[1]==r[2]){
            cout << "YES" << endl;
            cout << r[2] << " " <<  r[0] << " " <<  r[0] << endl;
        }
        else cout << "NO" << endl;
	}
	return 0; 
}
