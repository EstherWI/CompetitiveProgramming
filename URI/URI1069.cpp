#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
  int m, d;
  char x[1010];
  cin>>m;
  while (m--){
    scanf("%s", x);
    d = 0;
    for(int i = 0; strlen(x); i++){
      if (x[i] == '\0')
        break;
      if (x[i] == '<'){
        for (int j = i; j< strlen(x); j++){
          if (x[j] == '>'){
              d++;
              x[j] = '0';
              break;
          }
        }
      }
      
    }
    cout<<d<<endl;
    
  }
  return 0;
}
