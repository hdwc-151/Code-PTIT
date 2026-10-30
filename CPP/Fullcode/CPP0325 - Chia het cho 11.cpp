#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int res=0;
        for(auto x:s) {
            res=res*10+(x-'0');
            res%=11;
        }
        cout << (res==0) << "\n";
    }
    return 0;
}