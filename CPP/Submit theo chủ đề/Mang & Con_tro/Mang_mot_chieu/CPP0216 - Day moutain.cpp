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
        int l,r; cin >> l >> r;
        while(l<=r&&a[l]<=a[l+1]) l++;
        l++;
        while(l<=r&&a[l]<=a[l-1]) l++;
        (l>r)?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}