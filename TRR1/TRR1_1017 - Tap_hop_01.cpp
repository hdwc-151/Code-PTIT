#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int> a(n),b(n),c(n,0);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    for(int i=0;i<n;i++) c[i]=(a[i]||b[i]);
    cout << accumulate(c.begin(),c.end(),0) << '\n';
    for(int i=0;i<n;i++) if(c[i]==1) cout << i+1 << ' ';
    return 0;
}