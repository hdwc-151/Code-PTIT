#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            int d=0;
            while(n%i==0) {
                d++;
                n/=i;
            }
            cout << i << " " << d << " ";
        }
    }
    if(n>1) cout << n << " 1";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}