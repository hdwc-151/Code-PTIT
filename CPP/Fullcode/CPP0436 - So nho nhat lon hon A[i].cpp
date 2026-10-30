#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(int i=0;i<n;i++) {
            int l=lower_bound(b,b+n,a[i]+1)-b;
            (l==n)?cout<<"_ ":cout<<b[l]<<" ";
        }
        cout << "\n";
    }
    return 0;
}