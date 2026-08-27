#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    int a[n-1];
    vector<bool> dd(n+1,0);
    for(auto &x:a){
        cin >> x;
        dd[x]=1;
    }
    for(int i=1;i<=n;i++)
        if(!dd[i]) {
            cout << i << "\n";
            return;
        }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}