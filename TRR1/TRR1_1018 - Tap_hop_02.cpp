#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    vector<int> ans;
    for(int i=0;i<n;i++) if(a[i]+b[i]==2) ans.push_back(i+1);
    cout << ans.size() << '\n';
    for(int x:ans) cout << x << ' ';
    return 0;
}