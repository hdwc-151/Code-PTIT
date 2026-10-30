#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream file;
    file.open("VANBAN.in");
    set<string> se;
    string s;
    while(file >> s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        se.insert(s);
    }
    file.close();
    for(auto x:se) cout << x << "\n";
    return 0;
}