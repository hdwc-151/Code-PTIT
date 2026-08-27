#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        long long res=-1e18;
        for(int i=0;i<n;i++) {
            long long temp=1;
            for(int j=i;j<n;j++) {
                temp*=a[j];
                res=max(res,temp);
            }
        }
        cout << res << "\n";
    }
    return 0;
}