#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int s=65+n-2;
    int dem=n;
    for(int i=1;i<=n;i++) {
        int d=s;
        for(int j=1;j<=dem;j++) {
            printf("%c",d);
            d++;
        }
        printf("\n");
        dem--;
        s--;
    }
    return 0;
}