#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,m,x; cin >> n >> m;
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            cin >> x;
            mp[x]++;
        }
        for(int i=0;i<m;i++) {
            cin >> x;
            mp[x]++;
        }
        for(auto x:mp) cout << x.first << " ";
        cout << "\n";
        for(auto x:mp) if(x.second>=2) cout << x.first << " ";
        cout << "\n";
    }
    return 0;
}
//CPP0418 & CPP0419 are one and the same