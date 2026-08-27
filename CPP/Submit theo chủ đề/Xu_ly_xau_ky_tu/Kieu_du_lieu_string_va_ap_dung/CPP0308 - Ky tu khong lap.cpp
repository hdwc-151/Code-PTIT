#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; cin >> s;
        int dd[26]={0};
        for(auto x:s) dd[x-'A']++;
        for(auto x:s) if(dd[x-'A']==1) cout << x;
        cout << "\n";
    }
    return 0;
}