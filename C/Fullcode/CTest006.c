#include <stdio.h>
#include <math.h>
int is_prime(int n) {
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++) {
        if (n%i == 0) 
        return 0;
    }
    return 1;
}

int main() {
    int n,m;
    if (scanf("%d %d",&n,&m) == 2) {
        int a[405];
        for (int i=0;i<n*m;i++) {
            scanf("%d",&a[i]);
        }
        for (int i=0; i<n;i++) {
            for (int j=0;j<m;j++) {
                printf("%d ",is_prime(a[i * m + j]));
            }
            printf("\n");
        }
    }
    return 0;
}