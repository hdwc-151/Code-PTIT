#include <bits/stdc++.h>
using namespace std;
const int MAX=1e5;
vector<int> dp(MAX+5,1e9);
void precompute() {
    vector<int> coins;
    queue<int> q;
    q.push(1); q.push(2); q.push(3);
    while(!q.empty()) {
        int u=q.front();
        q.pop();
        coins.push_back(u);
        if(u*10+1<=MAX) q.push(u*10+1);
        if(u*10+2<=MAX) q.push(u*10+2);
        if(u*10+3<=MAX) q.push(u*10+3);
    }
    dp[0]=0;
    for(int coin:coins) {
        for(int i=coin;i<=MAX;i++) if(dp[i-coin]+1<dp[i]) dp[i]=dp[i-coin]+1;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    precompute();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << dp[n] << "\n";
    }
    return 0;
}