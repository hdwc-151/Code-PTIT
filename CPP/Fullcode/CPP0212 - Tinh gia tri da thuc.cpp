#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,x; cin >> n >> x;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        reverse(a,a+n);
        long long factorial=1,sum=0;
        for(int i=0;i<n;i++) {
            sum=(sum+factorial*a[i])%MOD;
            factorial=factorial*x%MOD;
        }
        cout << sum << "\n";
    }
    return 0;
}