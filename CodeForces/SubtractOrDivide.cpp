#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << (n <= 3? n-1 : 2 + (n&1)) << '\n';
    }
    return 0;
}
