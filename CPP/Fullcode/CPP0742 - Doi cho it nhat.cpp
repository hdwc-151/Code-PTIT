#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i].first;
            a[i].second=i;
        }
        sort(a.begin(),a.end());
        vector<bool> visited(n,false);
        int swap=0;
        for(int i=0;i<n;i++) {
            if(visited[i]||a[i].second==i) continue;
            int cycle=0;
            int j=i;
            while(!visited[j]) {
                visited[j]=true;
                j=a[j].second;
                cycle++;
            }
            if(cycle>1) swap+=(cycle-1);
        }
        cout << swap << "\n";
    }
    return 0;
}