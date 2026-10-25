#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int h,m,n,t; cin >> h >> m >> n >> t;
    long long res=1LL*m*n*(t-1)+1;
    cout << (res>h?0:res);
    return 0;
}