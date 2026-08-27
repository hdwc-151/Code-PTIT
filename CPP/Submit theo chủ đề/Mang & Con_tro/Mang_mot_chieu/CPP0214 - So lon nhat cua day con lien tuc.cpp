#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        int a[n];
        for(auto &x:a) cin >> x;
        deque<int> dp;
        for(int i=0;i<n;i++) {
            while(!dp.empty()&&a[dp.back()]<=a[i]) dp.pop_back();
            dp.push_back(i);
            if(dp.front()<i-k+1) dp.pop_front();
            if(i+1>=k) cout << a[dp.front()] << " ";
        }
        cout << "\n";
    }
    return 0;
}