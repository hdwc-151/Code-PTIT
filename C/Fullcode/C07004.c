#include <stdio.h>
long long UCLN(long long a,long long b) {
    while (b != 0) { 
        long long x=a%b;
        a=b;
        b=x;
    }
    return a;
}

int main() {
    long long tu,mau;
    if (scanf("%lld %lld",&tu,&mau) == 2) {
        long long ucln=UCLN(tu,mau);
        printf("%lld/%lld\n",tu/ucln,mau/ucln);
    }
    return 0;
}