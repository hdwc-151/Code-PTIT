#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    vector<bool> v(n+1,0);
    for(int i=0;i<n;i++) {
        int element; cin >> element;
        if(element>=1&&element<=n) v[element]=1;
    }
    for(int i=1;i<=n;i++)
        if(!v[i]) {
            cout << i << "\n";
            return;
        }
    cout << n+1 << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}