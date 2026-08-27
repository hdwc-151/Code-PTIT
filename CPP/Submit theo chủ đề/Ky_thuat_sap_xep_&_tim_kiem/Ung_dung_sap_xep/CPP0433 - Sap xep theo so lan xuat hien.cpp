#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b) {
    if(a.second>b.second) return 1;
    if(a.second==b.second&&a.first<b.first) return 1;
    return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int,int> m;
        for(int i=0;i<n;i++) {
            int x; cin >> x;
            m[x]++;
        }
        vector<pair<int,int>> v;
        for(auto x:m) v.push_back(make_pair(x.first,x.second));
        sort(v.begin(),v.end(),cmp);
        for(auto x:v) for(int i=1;i<=x.second;i++) cout << x.first << " ";
        cout << "\n";
    }
    return 0;
}