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
        for(int i=0;i<s.length();i++) dd[s[i]-'a']++;
        int d=0;
        for(auto x:dd) d=max(d,x);
        (d<=(s.length()+1)/2)?cout<<"1\n":cout<<"0\n";
    }
    return 0;
}