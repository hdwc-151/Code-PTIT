#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double a,b; cin >> a >> b;
    if(a==0) cout << (b==0?1:0);
    else cout << (a*b>0?1:0);
    return 0;
}