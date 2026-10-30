#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n,x; cin >> n >> x;
        int count=0;
        for(int i=1;i<=n;i++) {
            int val; cin >> val;
            if(val==x) count++;
        }
        count!=0?cout<<count<<"\n":cout<<"-1\n";
    }
    return 0;
}