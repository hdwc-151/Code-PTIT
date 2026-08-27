#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int count=0;
    for(int i=1;i<=n;i++) {
        int one=0,zero=0;
        for(int j=1;j<=3;j++) {
            int x; cin >> x;
            x==1?one++:zero++;
        }
        if(one>=2) count++;
        }
        cout << count;
    return 0;
}