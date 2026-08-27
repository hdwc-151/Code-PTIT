#include <stdio.h>
long long gcd(long long a,long long b) {
    while (b) {
        long long t=a%b;
        a=b;
        b=t;
    }
    return a;
}

long long lcm(long long a,long long b) {
    return (a/gcd(a,b))*b;
}

void simplify(long long *tu, long long *mau) {
    long long g=gcd(*tu, *mau);
    *tu /= g;
    *mau /= g;
}

void solve(int t) {
    long long tu1,mau1,tu2,mau2;
    scanf("%lld %lld %lld %lld",&tu1,&mau1,&tu2,&mau2);

    simplify(&tu1,&mau1);
    simplify(&tu2,&mau2);

    long long mc=lcm(mau1,mau2);
    long long quy1=tu1*(mc/mau1);
    long long quy2=tu2*(mc/mau2);
    printf("Case #%d:\n",t);
    printf("%lld/%lld %lld/%lld\n",quy1,mc,quy2,mc);
    long long sum_tu=quy1+quy2;
    long long sum_mau=mc;
    simplify(&sum_tu,&sum_mau);
    printf("%lld/%lld\n",sum_tu,sum_mau);
    long long div_tu=tu1*mau2;
    long long div_mau=mau1*tu2;
    simplify(&div_tu,&div_mau);
    printf("%lld/%lld\n",div_tu,div_mau);
}

int main() {
    int t;
    if (scanf("%d",&t) == 1) {
        for (int i=1;i<=t;i++) {
            solve(i);
        }
    }
    return 0;
}