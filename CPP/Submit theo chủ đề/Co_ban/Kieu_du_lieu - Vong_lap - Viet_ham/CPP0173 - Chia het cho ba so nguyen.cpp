#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b) {
    while(b>0) {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
long long LCM(int a,int b) {
    return (long long)a*b/GCD(a,b);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        long long x,y,z,n; cin >> x >> y >> z >> n;
        long long l=pow(10,n-1),r=pow(10,n)-1,bcnn=LCM(LCM(x,y),z);
        if(bcnn>r) cout << "-1\n";
        else if(l%bcnn==0) cout << l << "\n";
        else {
            long long res=l/bcnn;
            cout << bcnn*(res+1) << "\n";
        }
    }
    return 0;
}