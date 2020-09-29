#include<bits/stdc++.h> 
using namespace std; 

int main(){
    
    long N, j, m;
    bool ab;
    cout << "PERFECTION OUTPUT" << endl;
    while(scanf("%ld", &N) && N!=0){
        ab = false;
        m = N/2;
        j=0;
		for(long i=1;i<m;i++){
			if(m%i==0){
				j=j+i;
			}
            if (j > N) {
				ab = true;
				break;
			}
		}
        cout << N << " ";
		if(ab) cout << "ABUNDANT" << endl;
        else if(j==N) cout << "PERFECT" << endl;
        else cout << "DEFICIENT" << endl;
    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}
