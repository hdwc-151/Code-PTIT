#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,q; cin >> n >> q;
        vector<int> v(n+1,0);
        for(int i=1;i<=n;i++) {
            cin >> v[i];
            v[i]+=v[i-1];
        }
        for(int i=1;i<=q;i++) {
            int l,r; cin >> l >> r;
            cout << v[r]-v[l-1] << "\n";
        }
    }
    return 0;
}