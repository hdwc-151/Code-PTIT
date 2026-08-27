#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,x; cin >> n >> x;
    int a[n];
    for(auto &val:a) cin >> val;
    for(int i=0;i<n;i++) 
        if(a[i]==x) {
            cout << i+1 << "\n";
            return;
        }
    cout << "-1\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}