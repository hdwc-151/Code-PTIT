#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,k; cin >> n >> k;
    vector<vector<long long>> C(n+1,vector<long long> (n+1,0));
    for(int i=0;i<=n;i++) {
        C[i][0]=1;
        for(int j=1;j<=i;j++) C[i][j]=C[i-1][j-1]+C[i-1][j];
    }
    long long num=(1LL<<n)-C[n][k];
    cout << num+1;
    return 0;
}