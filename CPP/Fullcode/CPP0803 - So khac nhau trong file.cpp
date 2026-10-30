#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream file;
    file.open("DATA.in");
    map<int,int> mp;
    int x;
    while(file >> x) mp[x]++;
    file.close();
    for(auto x:mp) cout << x.first << " " << x.second << "\n";
    return 0;
}