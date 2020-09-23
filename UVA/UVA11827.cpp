#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
int main()
{
    int M, N, ans;
    int A[101];
    string line;
    stringstream s;
    scanf("%d", &N);
	getchar();
    for(int i=0;i<N;i++){
        getline(cin, line);
        s.clear();
        s << line;
        M = 0;
        while(s >> A[M])M++;
        ans = 0;
        for(int i = 0; i <M; i++)
            for(int j = i+1; j < M; j++)
                ans = max(ans, gcd(A[i], A[j]));
        printf("%d\n", ans);
    }
    return 0;
}