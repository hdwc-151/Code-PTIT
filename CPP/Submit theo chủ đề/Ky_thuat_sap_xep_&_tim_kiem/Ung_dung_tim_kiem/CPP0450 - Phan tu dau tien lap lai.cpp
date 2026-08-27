#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        map<int,int> mp;
        int res=-1,stop=0;
        for(int i=1;i<=n;i++) {
            int x; cin >> x;
            mp[x]++;
            if(mp[x]==2&&!stop) {
                res=x;
                stop=1;
            }
        }
        cout << res << "\n";
    }
    return 0;
}