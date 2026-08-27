#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    set<string> s1,s2;
    ifstream file1,file2;
    file1.open("DATA1.in");
    while(file1 >> s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s1.insert(s);
    }
    file1.close();
    file2.open("DATA2.in");
    while(file2 >> s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s2.insert(s);
    }
    file2.close();
    map<string,int> mp;
    for(auto x:s1) mp[x]++;
    for(auto x:s2) mp[x]++;
    for (auto x:mp) cout << x.first << " ";
    cout << "\n";
    for(auto x:mp) if (x.second>1) cout << x.first << " ";
    return 0;
}