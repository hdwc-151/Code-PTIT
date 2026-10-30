#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        for(long  i=2;i*i<=n;i++) if(n%i==0) {
            while(n%i==0) {
                cout << i << " ";
                n/=i;
            }
            if(n==i) break;
        }
        if(n>1) cout << n;
        cout << "\n";
    }
    return 0;
}