#include <stdio.h>

int giai_thua(int n) {
    int f=1;
    for(int i=n;i>=1;i--)
        f *= i;
    return f;
}

int pascal(int n,int t) {
    return giai_thua(n)/(giai_thua(t)*giai_thua(n-t));
}

int main () {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++)
            printf("%d ",pascal(i,j));
                printf("\n");
    }
    return 0;
}