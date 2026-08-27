#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        vector<int> a(n);
        for(auto &x:a) cin >> x;
        int sum=0;
        for(int i=0;i<k;i++) sum+=a[i];
        int l=0,r=k-1,maxx=sum;
        for(int i=k;i<n;i++) {
            sum=sum-a[i-k]+a[i];
            if(sum>maxx) {
                maxx=sum;
                l=i-k+1,r=i;
            }
        }
        for(int i=l;i<=r;i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}