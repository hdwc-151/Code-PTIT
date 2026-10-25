#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,k; cin >> n >> k;
    int cnt=0;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) if((i*j)%4!=0) cnt++;
    cout << cnt+k;
    return 0;
}