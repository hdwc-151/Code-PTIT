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
        sort(a,a+n,greater<int>());
        for(int i=0;i<n;i++) {
            cout << a[i] << " ";
            k--;
            if(k==0) break;
        }
        cout << "\n";
    }
    return 0;
}