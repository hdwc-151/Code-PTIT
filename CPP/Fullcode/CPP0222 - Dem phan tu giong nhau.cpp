#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(1e5+1,0);
        for(int i=1;i<=n;i++) {
            set<int> s;
            for(int j=1;j<=n;j++) {
                int x; cin >> x;
                s.insert(x);
            }
            vector<int> t(s.begin(),s.end());
            for(auto x:t) v[x]++;
        }
        int count=0;
        for(auto x:v) if(x==n) count++;
        cout << count << "\n";
    }
    return 0;
}