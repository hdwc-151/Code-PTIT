#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int minn=1e5,maxx=0;
        bool dd[100001]={0};
        for(int i=1;i<=n;i++) {
            int x; cin >> x;
            dd[x]=1;
            minn=min(minn,x);
            maxx=max(maxx,x);
        }
        int count=0;
        for(int i=minn;i<maxx;i++) if(!dd[i]) count++;
        cout << count << "\n";
    }
    return 0;
}