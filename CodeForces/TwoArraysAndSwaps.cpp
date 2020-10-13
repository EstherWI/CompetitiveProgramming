#include <bits/stdc++.h> 
using namespace std;
 
int main(){    
    int n, k, t, mina=40, maxb=-1, inda, indb, suma;
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
        while(k--){
            mina=40, maxb=-1;
            for(int i=0;i<n;i++){
                if(a[i]<mina){
                    inda=i;
                    mina=a[i];
                }
            }  
            for(int i=0;i<n;i++){
                if(b[i]>maxb){
                    indb=i;
                    maxb=b[i];
                }
            }
            if(mina<maxb){
                int h = a[inda];
                a[inda]=b[indb];
                b[indb]=h;
            }
            else break;
        }
        for(int i=0;i<n;i++){
            suma+=a[i];
        }
        cout << suma <<endl;
    }
}
