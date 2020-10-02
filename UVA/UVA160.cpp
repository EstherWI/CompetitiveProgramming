//Factors and Factorials
#include <bits/stdc++.h> 
using namespace std; 
int get_powers(int n, int p){
    int res = 0;
    for (int power = p ; power <= n ; power *= p)
        res += n/power;
    return res;
}

bitset<100000>bs; 
std::vector<int>primes;

void sieve(int upperbond){
    bs.set();
    bs[0]=bs[1]=0;

    for(int i=2; i<=upperbond;i++)
        if(bs[i]){
            for(int j=i*i;j<=upperbond;j+=i) 
                bs[j]=0;
            primes.push_back((int)i);
        }
}
int main() 
{ 
	int t, n, j;
	sieve(1000);
	while(scanf("%d", &t) && t!=0) {
		printf("%3d! =",t);  
		j=0; 
		for(int i=0; i < primes.size(); i++){
			n = get_powers(t, primes.at(i));
			if(n==0) break;
			if(j>14){  
            	printf("\n      ");  
          		j=0;  
       		}  
        	j++;  
			printf("%3d", n);
		}
		cout << endl;

	}
	return 0; 
}
