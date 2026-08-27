#include <stdio.h>
int main() {
    int n, m, p;
    if (scanf("%d %d %d",&n,&m,&p) == 3) {
        int A[2500],B[2500],C[2500]={0};
        for (int i=0;i<n*m;i++) {
            scanf("%d",&A[i]);
        }
        for (int i=0;i<m*p;i++) {
            scanf("%d",&B[i]);
        }
        for (int i=0;i<n;i++) {
            for (int j=0;j<p;j++) {
                int sum=0;
                for (int k=0;k<m;k++) {
                    sum += A[i*m+k]*B[k*p+j];
                }
                C[i * p + j] = sum;
            }
        }
        for (int i=0;i<n;i++) {
            for (int j=0;j<p;j++) {
                printf("%d ",C[i*p+j]);
            }
            printf("\n");
        }
    }
    return 0;
}