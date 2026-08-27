#include <stdio.h>
int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        long long n;
        scanf("%lld",&n);
        int max=0;
        int min=9;
        int so;
        while(n>0) {
            so=n%10;
            if(so>max)
                max=so;
            if(so<min)
                min=so;
        n/=10;
        }
    printf("%d %d\n",max,min);
    }
    return 0;
}