#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        int a[n],b[m];
        for(auto &x:a) cin >> x;
        for(auto &x:b) cin >> x;
        int maxx=*max_element(a,a+n),minn=*min_element(b,b+n);
        long long res=(long long)maxx*minn;
        cout << res << "\n";
    }
    return 0;
}