#include <stdio.h>
int main() {
    int n;
    if (scanf("%d",&n) == 1 && n > 0) {
        int a[10005];
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                a[i*n+j]=(j>=i) ? (j-i) : 0;
            }
        }
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                printf("%d ",a[i*n+j]);
            }
            printf("\n");
        }
    }
    return 0;
}