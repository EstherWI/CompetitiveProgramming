#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
	int t, n, j, cont;
  cin >> t;
	while(t--) {
        cin >> n;
        int a[2*n], b[n];
        for(int i = 0;i<n;i++){
            b[i]=0;
        }
        for(int k = 0;k<(2*n);k++){
            cin >> a[k];
        }
        b[0]=a[0];
        cont=0;
        j=1;
        for(int i = 1;i<(2*n);i++){
            cont=0;
            for(int k = 0;k<n;k++){
                if(b[k]!=a[i]){
                    cont++;
                }
            }
            if(cont==n){
                b[j]=a[i];
                j++;
            }
            if(j==n) break;
        }
        for(int l = 0;l<n;l++){
            cout << b[l] << " ";
        }
        cout << endl;
	}
	return 0; 
}
