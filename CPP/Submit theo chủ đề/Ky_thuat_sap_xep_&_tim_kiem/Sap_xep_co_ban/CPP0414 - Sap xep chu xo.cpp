#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        bool dd[10]={0};
        for(int i=1;i<=n;i++) {
            string s; cin >> s;
            for(auto x:s) dd[x-'0']=1;
        }
        for(int i=0;i<10;i++) if(dd[i]==1) cout << i << " ";
        cout << "\n";
    }
    return 0;
}