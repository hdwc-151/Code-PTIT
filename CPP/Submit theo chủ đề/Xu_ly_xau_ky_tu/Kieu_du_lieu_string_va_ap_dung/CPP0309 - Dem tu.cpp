#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string str,s;
        getline(cin,str);
        stringstream ss(str);
        int d=0;
        while(ss>>s) d++;
        cout << d << "\n";
    }
    return 0;
}