#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        double a,b,c,d; cin >> a >> b >> c >> d;
        double r=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        cout << setprecision(4) << fixed << r << "\n";
    }
    return 0;
}