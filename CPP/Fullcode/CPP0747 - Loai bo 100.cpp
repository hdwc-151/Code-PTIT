#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n=s.length();
        vector<int> st;
        vector<bool> deleted(n,false);
        for(int i=0;i<n;i++) {
            st.push_back(i);
            if(st.size()>=3) {
                int sz=st.size();
                if(s[st[sz-3]]=='1'&&s[st[sz-2]]=='0'&&s[st[sz-1]]=='0') {
                    deleted[st[sz-3]]=true;
                    deleted[st[sz-2]]=true;
                    deleted[st[sz-1]]=true;
                    st.pop_back(); st.pop_back(); st.pop_back();
                }
            }
        }
        int max_len=0,current_len=0;
        for(int i=0;i<n;i++) {
            if(deleted[i]) {
                current_len++;
                max_len=max(max_len,current_len);
            }
            else current_len=0;
        }
        if(max_len>0) cout << max_len << "\n";
        else cout << "\n";
    }
    return 0;
}