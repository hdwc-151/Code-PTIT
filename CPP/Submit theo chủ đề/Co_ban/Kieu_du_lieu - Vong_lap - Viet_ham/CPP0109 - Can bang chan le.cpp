#include <bits/stdc++.h>
using namespace std;
bool check(int n) {
    int even=0,odd=0;
    while(n>0) {
        int digit=n%10;
        (digit%2==0)?even++:odd++;
        n/=10;
    }
    return even==odd;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int l=pow(10,n-1);
    int r=pow(10,n)-1;
    int d=0;
    for(int i=l;i<=r;i++) {
        if(check(i)) {
            cout << i << " ";
            d++;
            if(d==10) cout << "\n";
            d%=10;
        }
    }
    return 0;
}