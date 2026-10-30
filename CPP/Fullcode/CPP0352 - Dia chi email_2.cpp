#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    map<string,int> email_count;
    while(t--) {
        string str,s;
        getline(cin,str);
        vector<string> v;
        stringstream ss(str);
        while(ss >> s) {
            transform(s.begin(),s.end(),s.begin(),::tolower);
            v.push_back(s);
        }
        string r=v.back();
        for(int i=0;i<v.size()-1;i++) r+=v[i][0];
        email_count[r]++;
        cout << r;
        if(email_count[r]>1) cout << email_count[r];
        cout << "@ptit.edu.vn\n";    
    }
    
    return 0;
}