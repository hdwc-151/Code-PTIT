#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s; cin >> s;
    int i=s.length()-2,j=i+1;
    //int i=s.length()-2,j=s.length()-1;
    while(i>=0&&s[i]<=s[i+1]) i--;
    if(i<0) {
        cout << "-1\n";
        return;
    }
    while(s[j]>=s[i]) j--;
    while(s[j]==s[j-1]) j--;
    swap(s[i],s[j]);
    cout<<s<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}