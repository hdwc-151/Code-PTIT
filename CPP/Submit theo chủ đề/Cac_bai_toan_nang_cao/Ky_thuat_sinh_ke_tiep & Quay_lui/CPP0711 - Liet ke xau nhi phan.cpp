#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n,0);
        while(true) {
            for(int i=0;i<n;i++) cout << a[i];
            cout << " ";
            int i=n-1;
            while(i>=0&&a[i]==1) {
                a[i]=0;
                i--;
            }
            if(i<0) break;
            a[i]=1;
        }
        cout << "\n";
    }
    return 0;
}