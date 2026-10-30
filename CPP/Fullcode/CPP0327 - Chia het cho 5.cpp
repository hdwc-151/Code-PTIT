#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s;
        cin >> s;
        long long res=0;
        for(auto x:s) {
            res=res*2+(x-'0');
            res%=5;
        }
        (res==0)?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}