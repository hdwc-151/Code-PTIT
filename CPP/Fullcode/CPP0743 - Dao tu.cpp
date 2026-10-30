#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        stack<string> st;
        string str,s;
        getline(cin,str);
        stringstream ss(str);
        while(ss >> s) st.push(s);
        while(!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
    }
    return 0;
}