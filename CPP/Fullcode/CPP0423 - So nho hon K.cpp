#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,k,s=0,b=0; cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
            if(a[i]<=k) s++;
        }
        for(int i=0;i<s;i++) if(a[i]>k) b++;
        int res=b;
        for(int i=0,j=s;j<n;i++,j++) {
            if(a[i]>k) b--;
            if(a[j]>k) b++;
            res=min(res,b);
        }
        cout << res << "\n";
    }
    return 0;
}