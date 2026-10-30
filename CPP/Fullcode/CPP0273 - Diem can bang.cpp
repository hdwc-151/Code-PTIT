#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    int a[n+1]={0};
    for(int i=1;i<=n;i++) {
        cin >> a[i];
        a[i]+=a[i-1];
    }
    int sum=a[n];
    for(int i=1;i<=n;i++) {
        int sL=a[i-1],sR=a[n]-a[i];
        if(sL==sR) {
            cout << i << "\n";
            return;
        }
    }
    cout << "-1\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}