#include <bits/stdc++.h>
using namespace std;
long long floor_div(long long a,long long b) {
    long long res=a/b,rem=a%b;
    if(rem!=0&&((a<0)^(b<0))) res--;
    return res;
}
long long ceil_div(long long a,long long b) {
    long long res=a/b,rem=a%b;
    if(rem!=0&&!((a<0)^(b<0))) res++;
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double x_in,y_in,r_in; cin >> x_in >> y_in >> r_in;
    long long X=round(x_in*10000);
    long long Y=round(y_in*10000);
    long long R=round(r_in*10000);
    long long min_x=ceil_div(X-R,10000);
    long long max_x=floor_div(X+R,10000);
    long long ans=0;
    for(long long i=min_x;i<=max_x;i++) {
        long long dx=10000LL*i-X;
        long long rem=R*R-dx*dx;
        if(rem<0) continue;
        long long S=sqrtl(rem);
        while(S*S>rem) S--;
        while((S+1)*(S+1)<=rem) S++;
        long long min_y=ceil_div(Y-S,10000);
        long long max_y=floor_div(Y+S,10000);
        if(min_y<=max_y) ans+=(max_y-min_y+1);
    }
    cout << ans << "\n";
    return 0;
}