#include <stdio.h>
int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int digit=n%10;
        while(n>10)
            n/=10;
        if(digit==n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}