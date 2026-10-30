#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s1,s2,temp;
        getline(cin,s1);
        getline(cin,s2);
        map<string,bool>m;
        stringstream ss1(s1);
        while(ss1>>temp) m[temp]=1;
        stringstream ss2(s2);
        while(ss2>>temp) if(m.find(temp)!=m.end()) m.erase(m.find(temp));
        for(auto x:m) cout << x.first << " ";
        cout << "\n";
    }
    return 0;
}