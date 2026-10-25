#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double a,b,c; cin >> a >> b >> c;
    if(a==0) {
        if(b==0) cout << (c==0?1:0);
        else cout << (b*c>0?1:0);
    }
    double delta=b*b-4*a*c;
    if(delta<0) cout << 0;
    else {
        double t1=(-b+sqrt(delta))/(2*a),t2=((-b-sqrt(delta))/(2*a));
        cout << (t1>=0||t2>=0);
    }
    return 0;
}