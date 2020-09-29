#include<bits/stdc++.h> 
using namespace std; 

int main(){
    
    int t, N, cont[10], x;
    cin >> t;
    while(t--){
        cin >> N;
        for(int k=0; k<10; k++)
            cont[k]=0;

        for(int i=1;i<=N;i++){
            x=i;
            while(x!=0){
                cont[x%10]++;
                x/=10;
            }
        }
        for(int j=0;j<10;j++)
            printf("%d ", cont[j]);
        printf("\n");
	}
    return 0;
}
