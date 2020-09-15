#include <bits/stdc++.h>
using namespace std;

long long pisano(long long m){

  long long a=0, b=1, c=a+b;
  for(long long i=0; i<m*m;i++){
    c = (a+b)%m;
    a=b;
    b=c;
    if(a==0 && b==1) return i+1;
  }
}

long long fibonacci_huge(long long n, long long m){

  long long remainder = n%pisano(m);
  long long first = 0, second = 1, res = remainder;
  
  for(long long i=1;i<remainder;i++){
    res = (first+second)%m;
    first = second;
    second =res;
  }
  return res%m;
}  
