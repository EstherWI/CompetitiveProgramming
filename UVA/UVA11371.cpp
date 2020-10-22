//Number Theory for Newbies
#include <bits/stdc++.h>
using namespace std; 

int main() {
    char num[11];
    
    while(cin >> num) {
        int len = strlen(num), i, j;
        sort(num, num+len);
        for(i = 0; i < len; i++) {
            if(num[i] != '0') {
                swap(num[0], num[i]);
                break;
            }
        }
        long long a, b;
        sscanf(num, "%lld", &b);
        sort(num, num+len);
        for(i = 0, j = len-1; i < j; i++, j--)
            swap(num[i], num[j]);
        sscanf(num, "%lld", &a);
        printf("%lld - %lld = %lld = 9 * %lld\n", a, b, a-b, (a-b)/9);
    }
    return 0;
}
