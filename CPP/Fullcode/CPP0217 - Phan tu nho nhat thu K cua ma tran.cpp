#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        int a[n*n];
        for(auto &x:a) cin >> x;
        sort(a,a+n*n);
        cout << a[k-1] << "\n";
    }
    return 0;
}