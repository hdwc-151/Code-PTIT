#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        int k;
        cin >> s >> k;
        int dd[26]={0};
        for(auto x:s) dd[x-'a']++;
        int d=0;
        for(int i=0;i<26;i++) if(!dd[i]) d++;
        cout << (s.length()>=26&&k>=d) << "\n";
    }
    return 0;
}