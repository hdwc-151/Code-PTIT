#include <stdio.h>
#define ll long long
/*
Ver 1: Euclidian
long long GCD(long long a,long long b) {
    if(b==0) return a;
    return GCD(b,a%b);
}

Ver 2: Toán tử ba ngôi:
long long shorter(long long a,long long b) {
    return b == 0 ? a : shorter(b,a%b);
}

Ver 3: Dùng while:
long long iterative(long long a,long long b) {
    while(b) {
        long long r=a%b;
        a=b;
        b=r;
    }
    return a;
}
*/
ll iterative(ll a,ll b) {
    while(b) {
        ll r=a%b;
        a=b;
        b=r;
        //r -> remainder
    }
    return a;
}
int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",iterative(a,b));
    }
    return 0;
}