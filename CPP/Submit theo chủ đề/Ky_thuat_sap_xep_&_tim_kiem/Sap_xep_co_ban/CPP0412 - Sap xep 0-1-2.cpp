#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(auto &x:a) cin >> x;
        sort(a,a+n);
        for(auto x:a) cout << x << " ";
        cout << "\n";
    }
    return 0;
}