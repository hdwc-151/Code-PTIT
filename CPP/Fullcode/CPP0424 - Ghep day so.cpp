#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        vector<int> v;
        for(int i=1;i<=k;i++) 
            for(int j=0;j<n;j++) {
            int x; cin >> x;
            v.push_back(x);
            }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++) cout << v[i]  << " ";
        cout << "\n";
    }
    return 0;
}