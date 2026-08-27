/* Dùng thêm 1 vòng testcase
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s; cin >> s;
    for(auto x:s) {
        if(x!='0'&&x!='6'&&x!='8') {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        bool isLocPhat=true;
        string s; cin >> s;
        for(auto x:s) {
            if(x!='0'&&x!='6'&&x!='8') {
                isLocPhat=false;
                break;
            }
        }
        //printf("%s\n",isLocPhat?"YES":"NO");
        cout << (isLocPhat?"YES":"NO") << "\n";
    }
    return 0;
}