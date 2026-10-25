#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,t; cin >> n >> t;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int iter=0;iter<t;iter++) {
        if(accumulate(a.begin(),a.end(),0)==0) {
            cout << 0 << '\n';
            continue;
        }
        int id=n-1;
        while(a[id]==0) a[id--]=1;
        a[id]=0;
        for(int i=0;i<n;i++) cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}