#include <stdio.h>
#include <math.h>
int prime(int n) {
    if(n<2 || (n>2 && n%2==0)) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return n>1;
}

void solve() {
    long long l,r;scanf("%lld%lld",&l,&r);
    l=ceil(sqrt(l));
    r=floor(sqrt(r));
    int count=0;
    for(int i=l;i<=r;i++) if(prime(i)) count++;
    printf("%d\n",count);
}

int main () {
    int t;scanf("%d",&t);
    while(t--) solve();
    return 0;
}