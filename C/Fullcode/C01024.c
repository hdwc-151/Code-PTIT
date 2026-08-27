#include <stdio.h>
int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int so_cuoi=n%10;
        while(n>10) 
            n/=10;
            if(n==so_cuoi)
                printf("YES\n");
            else
                printf("NO\n");
    }
    return 0;
}