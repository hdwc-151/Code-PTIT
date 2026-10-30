/* Lookup table + Two pointer
#include <bits/stdc++.h>
using namespace std;
const char keypad[26]={
    '2','2','2',      // A, B, C
    '3','3','3',      // D, E, F
    '4','4','4',      // G, H, I
    '5','5','5',      // J, K, L
    '6','6','6',      // M, N, O
    '7','7','7','7',  // P, Q, R, S
    '8','8','8',      // T, U, V
    '9','9','9','9'   // W, X, Y, Z
};
void solve() {
    string s; cin >> s;
    int left=0,right=s.length()-1;
    while(left<right) {
        char num_left=keypad[toupper(s[left])-'A'];
        char num_right=keypad[toupper(s[right])-'A'];\
        if(num_left!=num_right) {
            cout << "NO\n";
            return;
        }
        left++;
        right--;
    }
    cout << "YES\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) solve();
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
char num(char c) {
    if(c>='A'&&c<='C') return '2';
    if(c>='D'&&c<='F') return '3';
    if(c>='G'&&c<='I') return '4';
    if(c>='J'&&c<='L') return '5';
    if(c>='M'&&c<='O') return '6';
    if(c>='P'&&c<='S') return '7';
    if(c>='T'&&c<='V') return '8';
    if(c>='W'&&c<='Z') return '9';
    
}
void solve() {
    string s; cin >> s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    string str="";
    for(auto x:s) str.push_back(num(x));
    int l=str.length();
    for(int i=0;i<l/2;i++) {
        if(str[i]!=str[l-i-1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--) solve();
    return 0;
}