#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        set<int> se;
        for(int i=1;i<=n;i++) {
            int x; cin >> x;
            se.insert(x);
        }
        vector<int> v(se.begin(),se.end());
        (v.size()<2)?cout<<"-1\n":cout<<v[0]<<" "<<v[1]<<"\n";
    }
    return 0;
}