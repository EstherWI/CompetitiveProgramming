#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, ok, par, impar;
    scanf("%d", &n);
    for(int i=0; i<n;i++)
    {
        ok=0;
        par=0;
        impar=0;
        cin >> x;
        int a[x];
        for(int k=0;k<x;k++){
            cin >> a[k];
        }
		for(int j=0;j<x;j++){
			if(j%2==0){
                if(a[j]%2==0){
                    ok++;
                }
                else par++;
            }
            else{
                if(a[j]%2==1){
                    ok++;
                }
                else impar++;
            }
		}
        if(ok==x) cout<< 0 << endl;
        else if(par==impar) cout<< par << endl;
        else cout << -1 << endl;
    }
    return 0;
}
