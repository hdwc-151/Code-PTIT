#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s; cin >> s;
    if(s[0]=='0') {
        cout << "INVALID\n";
        return;
    }
    bool dd[10]={0};
    for(auto x:s) {
        if(x>='0'&&x<='9') dd[x-'0']=1;
        else {
            cout << "INVALID\n";
            return;
        }
    }
    for(auto x:dd) {
        if(x==0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}