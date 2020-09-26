#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    scanf("%d", &n);
    for(int i=0; i<n;i++)
    {
        cin >> s;
        cout<<s[0];
		for(int j=1;j<s.size();j++){
			cout<<s[j];
			if(j%2==1) j++;
		}
        cout<<endl;
    }
    return 0;
}
