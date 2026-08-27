#include <stdio.h>
#include <math.h>
int UCLN(int a,int b) {
    while(b>0) {
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}

long long BCNN(int a,int b) {
    return (long long) a*b/(UCLN(a,b));
}

int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%lld %d\n",BCNN(a,b),UCLN(a,b));
    }
}