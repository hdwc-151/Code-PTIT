#include <stdio.h>
#include <math.h>
int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        unsigned long long n;
        scanf("%llu",&n);
        int x=sqrt(n);
        if(x*x==n)
        printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}