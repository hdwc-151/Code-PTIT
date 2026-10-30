#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string a,b; cin >> a >> b;
        string min_a=a,min_b=b;
        string max_a=a,max_b=b;
        replace(min_a.begin(),min_a.end(),'6','5');
        replace(min_b.begin(),min_b.end(),'6','5');
        replace(max_a.begin(),max_b.end(),'5','6');
        replace(max_b.begin(),max_b.end(),'5','6');
        cout << stoll(min_a)+stoll(min_b) << " " << stoll(max_a)+stoll(max_b) << "\n";
    }
    return 0;
}