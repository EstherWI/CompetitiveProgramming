#include <bits/stdc++.h> 
using namespace std; 
 
int main()
{
  int N, i, lucky=0, x[10]={4,7,47,74,447,474,477,774,747,744};
	scanf("%d", &N);
	for(i=0;i<10;i++){
		if(N%x[i]==0){
			lucky=1;
			break;
		}
	}
	if(lucky==1) printf("YES\n");
	else printf("NO\n");
	
    return 0;
}
