#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s; cin >> s;
    for(int i=1;i<s.length();i++) if(abs(s[i]-s[i-1])!=1) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}