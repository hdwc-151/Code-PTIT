#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    int a[n];
    for(auto &x:a) cin >> x;
    if(n==1) {
        cout << a[0] << "\n";
        return;
    }
    for(int i=0;i<n;i++) {
        if(i==0) cout << a[0]*a[1];
        else if(i==n-1) cout << a[n-1]*a[n-2];
        else cout << a[i-1]*a[i+1];
        cout << " ";
    }
    cout << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}