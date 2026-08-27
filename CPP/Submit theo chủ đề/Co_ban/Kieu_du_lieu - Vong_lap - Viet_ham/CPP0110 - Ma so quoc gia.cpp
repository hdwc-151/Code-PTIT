#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        while(1) {
            int p=s.find("084");
            if(p==-1) break;
            s.erase(p,3);
        }
        cout << s << "\n";
    }
    return 0;
}