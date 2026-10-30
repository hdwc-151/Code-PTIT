#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        vector<int> v(n+m);
        for(auto &x:v) cin >> x;
        sort(v.begin(),v.end());
        for(auto x:v) cout << x << " ";
        cout << "\n";
    }
    return 0;
}