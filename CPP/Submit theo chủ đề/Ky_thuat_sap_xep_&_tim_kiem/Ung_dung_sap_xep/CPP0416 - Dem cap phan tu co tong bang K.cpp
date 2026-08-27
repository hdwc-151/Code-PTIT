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
        int count=0;
        for(int i=0;i<n;i++) {
            if(a[i]>k/2) break;
            int l=lower_bound(a+i+1,a+n,k-a[i])-a;
            if(l!=n) {
                int u=upper_bound(a+i+1,a+n,k-a[i])-a;
                count+=u-l;
            }
        }
        cout << count << "\n";
    }
    return 0;
}