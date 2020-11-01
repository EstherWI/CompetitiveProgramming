#include <bits/stdc++.h>
using namespace std; 
#define PI 3.14159265359
int main(){
	double v, s, r;
    cin>>v>>s;
    r=s/(2*sin(PI/v));
    printf("%.9lf\n", PI*r*r);
}
