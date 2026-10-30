#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        long long h=a[0],g=a[0];
        for(int i=1;i<n;i++) {
            h=h*a[i]%MOD;
        g=__gcd(g,a[i]);
        }
        long long res=1;
        for(int i=1;i<=g;i++) res=res*h%MOD;
        cout << res << "\n";
    }
    return 0;
}