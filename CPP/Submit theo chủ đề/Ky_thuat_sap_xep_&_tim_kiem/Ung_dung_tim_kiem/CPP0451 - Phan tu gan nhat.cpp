#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,k,x;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        cin >> k >> x;
        int l=lower_bound(a.begin(),a.end(),x)-a.begin()-1;
        int r=upper_bound(a.begin(),a.end(),x)-a.begin();
        for(int i=l-k/2+1;i<=l;i++) {
            if(i>=0) cout << a[i] << " ";
            else cout << "-1 ";
        }
        for(int i=r;i<r+k/2;i++) {
            if(i<n) cout << a[i] << " ";
            else cout << "-1 ";
        }
        cout << "\n";
    }
    return 0;
}