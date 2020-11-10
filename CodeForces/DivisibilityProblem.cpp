#include <iostream>
using namespace std;

int main(void){
  long long a, b, t, x;
  cin>>t;
  while(t--){
    cin>>a>>b;
    x=a/b;
    while((b*x)<a){
      x++;
    }
    cout<<abs((b*x)-a)<<endl;
  }

  return 0;
}
