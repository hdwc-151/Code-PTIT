#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<bool> v(n,0);
        for(int i=0;i<n;i++) {
            long long x; cin >> x;
            if(x<0||x>=n) continue;
            v[x]=1;
        }
        for(int i=0;i<n;i++) v[i]?cout<<i<<" ":cout<<"-1 ";
        cout << "\n";
    }
    return 0;
}