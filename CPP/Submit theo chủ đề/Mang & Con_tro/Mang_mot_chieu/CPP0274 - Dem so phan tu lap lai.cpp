#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int,int>m;
        for(int i=0;i<n;i++) {
            int x; cin >> x;
            m[x]++;
        }
        int count=0;
        for(auto x:m) if(x.second>1) count+=x.second;
        cout << count << "\n";
    }
    return 0;
}