#include <bits/stdc++.h> 
using namespace std;
 
int main(){    
    int n, k, t, suma;
    cin >> t;
    while(t--){
        cin >> n >> k;
        suma=0;
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }  
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n, greater<int>());

        for(int i=0;i<n && k>0;i++){
            if(a[i]<b[i]){
                swap(a[i],b[i]);
                k--;
            }
            else break;
        }  
        for(int i=0;i<n;i++){
            suma+=a[i];
        }
        cout << suma <<endl;
    }
}
