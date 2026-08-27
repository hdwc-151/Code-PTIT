/* Tăng chặt + Bằng + Lộc phát ++ Tìm dấu chấm
#include <bits/stdc++.h>
using namespace std;
bool isAscending(const string &s) {
    return s[0]<s[1]&&s[1]<s[2]&&s[2]<s[3]&&s[3]<s[4];
}
bool isEqual(const string &s) {
    return (s[0]==s[1]&&s[1]==s[2])&&(s[3]==s[4]);
}
bool isLucky(const string &s) {
    for(char c:s) if(c!='6'&&c!='8') return false;
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int dot=s.find('.');
        string digit=s.substr(dot-3,3)+s.substr(dot+1,2);
        (isAscending(digit)||isEqual(digit)||isLucky(digit))?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
bool ascending(string s) {
    for(int i=1;i<5;++i) if(s[i]<=s[i-1]) return 0;
    return 1;
}
/* Bỏ giảm chặt
bool descending(string s) {
    for(int i=1;i<5;i++) if(s[i]>=s[i-1]) return 0;
    return 1;
}
*/
bool beautiful(string s) {
    return (s[0]==s[1]&&s[1]==s[2]&&s[3]==s[4]);
}
bool lucky(string s) {
    for(int i=0;i<5;i++) if(s[i]!='6'&&s[i]!='8') return 0;
    return 1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        // s.erase(0, 5);
        // s.erase(3, 1);
        int dot=s.find('.');
        string digit=s.substr(dot-3,3)+s.substr(dot+1,2);
        (ascending(digit)/* ||descending(s) */||beautiful(digit)||lucky(digit))?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}