#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    for(char c:s) {
        c=tolower(c);
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='y') cout << '.' << c;
    }
    return 0;
}