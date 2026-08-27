#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[1000];
        for(int i=0;i<n;i++) cin >> a[i];
        long long f[1000]={0};
        for(int i=0;i<n;i++) {
            f[i]=a[i];
            for(int j=0;j<i;j++) if(a[j]<a[i]) f[i]=max(f[i],f[j]+a[i]);
        }
        cout << *max_element(f,f+n);
        cout << "\n";
    }
    return 0;
}