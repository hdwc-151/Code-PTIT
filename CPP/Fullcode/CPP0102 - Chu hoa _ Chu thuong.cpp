/* Bitwise XOR
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        char c; cin >> c;
        //bitwise XOR
        if(isalpha(c)) c^=32;
        cout << c << "\n";
    }
    return 0;
}
*/

/* ASCII
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        char c; cin >> c;
        if(c>='a'&&c<='z') c-=32;
        else if(c>='A'&&c<='Z') c+=32;
        cout << c << "\n";
        }
    return 0;
}
*/