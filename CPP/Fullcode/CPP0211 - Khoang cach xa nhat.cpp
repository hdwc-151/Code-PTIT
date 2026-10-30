#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n],b[n+1]={INT_MIN};
        for(auto &x:a) cin >> x;
        for(int i=n-1;i>=0;i--) b[i]=max(b[i+1],a[i]);
        int res=0;
        for(int i=0;i<n;i++) {
            int l=i+1,r=n-1;
            while(l<=r) {
                int mid=(l+r)/2;
                if(b[mid]>=a[i]) {
                    l=mid+1;
                    res=max(res,mid-i);
                }
                else r=mid-1;
            }
        }
        cout << res << "\n";
    }
    return 0;
}