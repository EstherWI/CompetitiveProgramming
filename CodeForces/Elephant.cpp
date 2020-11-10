#include <iostream>
using namespace std;

int main(void){
  int N[5]={5,4,3,2,1};
  int num, passos=0, x;
  cin >> num;
  x=num;
  for(int i=0;i<5;i++){
    if(x>=N[i]){
      while(x>=N[i] && x!=0){
        x-=N[i];
        passos++;
      }
    }
    if(x==0) break;
  }
  cout << passos << endl; 
  return 0;
}
