#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int res=0;
        for(int i=0;i<s.length();i++)
            if(s[i]>='0'&&s[i]<='9') {
                int p=i+1;
                while(s[p]>='0'&&s[p]<='9') p++;
                string t=s.substr(i,p-i);
                res+=stoi(t);
                i=p;
            }
        cout << res << "\n";
    }
    return 0;
}