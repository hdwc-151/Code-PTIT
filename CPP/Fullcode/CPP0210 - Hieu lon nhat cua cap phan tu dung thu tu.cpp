#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int key=-1;
        for(int i=0;i+1<n;i++)
            for(int j=i;j+1<n;j++) {
                if(a[j]<=a[i]) continue;
                key=max(key,a[j]-a[i]);
            }
        cout << key << "\n";
    }
    return 0;
}