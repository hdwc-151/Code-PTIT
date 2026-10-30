#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    vector<string> ss;
    int i=0,j=0,res=0;
    bool check=false;
    while(i<s.size()) {
        while(j+1<s.size()&&s[j]==s[j+1]) j++;
        ss.push_back(s.substr(i,j-i+1));
        i=++j;
    }
    for(int index=ss.size()-1;index>=0;index--) {
        if((ss[index][0]=='A'&&!check)||(ss[index][0]=='B'&&check)) continue;
        res++;
        if(ss[index].size()>1) check=!check;
    }
    cout << res;
    return 0;
}