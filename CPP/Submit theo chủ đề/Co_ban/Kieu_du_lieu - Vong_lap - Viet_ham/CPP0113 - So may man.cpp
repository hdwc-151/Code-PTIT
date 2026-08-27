#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int l=s.length();
        if(l==1) cout << "0\n";
        else {
            string x=s.substr(l-2,2);
            x=="86"?cout<<"1\n":cout<<"0\n";
        }
    }
    return 0;
}