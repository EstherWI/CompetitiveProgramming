//Brick Game
#include <bits/stdc++.h> 
using namespace std;
 
int main(){    
    int t, n, caso=1, player;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> player;
            if(n/2==i){
                cout << "Case " << caso++ << ": " << player <<endl;
            }
        }
    } 
}
