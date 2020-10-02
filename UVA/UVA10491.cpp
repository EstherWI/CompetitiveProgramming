//Cows and Cars
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	double ncows, ncars, nshow;
	double first, second;
	while(cin >> ncows >> ncars >> nshow) {
		first = (ncows/(ncows+ncars))*(ncars / (ncars+ncows-nshow-1));
		second = (ncars/(ncows+ncars))*(ncars-1) / (ncars+ncows-nshow-1);
		printf("%.5lf\n", first+second);
	}
	return 0; 
} 
