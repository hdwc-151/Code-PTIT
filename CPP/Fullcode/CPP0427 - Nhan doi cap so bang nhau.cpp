#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n-1;i++) {
            if(a[i]==0) continue;
            if(a[i]==a[i+1]) {
                a[i]*=2;
                a[i+1]=0;
            }
        }
        int count=0;
        for(auto x:a)
            if(x!=0) {
                cout << x << " ";
                count++;
            }
        while(count<n) {
            cout << "0 ";
            count++;
        }
        cout << "\n";
    }
    return 0;
}