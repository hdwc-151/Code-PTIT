#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        int a[n];
        for(auto &x:a) cin >> x;
        sort(a,a+n);
        long long res=0;
        for(int i=0;i<n;i++) {
            int u=upper_bound(a+i+1,a+n,a[i]+k-1)-(a+i+1);
            res+=u;
        }
        cout << res << "\n";
    }
    return 0;
}