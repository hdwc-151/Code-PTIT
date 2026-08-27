#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int key=1e6;
        for(int i=1;i<n;i++) key=min(key,a[i]-a[i-1]);
        cout << key << "\n";
    }
    return 0;
}