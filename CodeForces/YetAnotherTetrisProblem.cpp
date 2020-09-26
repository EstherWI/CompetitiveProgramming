#include <bits/stdc++.h> 
using namespace std; 
 
 
int main() 
{ 
	int t, n, maxa=0;
	bool x = true;
  scanf("%d", &t);
	for(int i=0;i<t;i++){
		maxa=0;
		x = true;
    scanf("%d", &n);
		int a[n];
		for(int j=0;j<n;j++){
			scanf("%d", &a[j]);
			maxa = max(a[j], maxa);
    	}
		for(int k=0;k<n;k++){
			if((maxa - a[k])%2!=0){
				x = false;
				break;
			}
		}
		if(x){
			printf("YES\n");
		}
		else printf("NO\n");
 
    }
	
	return 0; 
}
