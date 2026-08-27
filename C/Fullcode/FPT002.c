#include <stdio.h>
int main() {
    int m,n,p,q;
    if (scanf("%d %d %d %d",&m,&n,&p,&q) == 4) {
        long long A[m*n],B[n*p],C[p*q];
        long long Temp[m*p],D[m*q];
        for (int i=0;i<m*n;i++) 
        scanf("%lld",&A[i]);
        for (int i=0;i<n*p;i++) 
        scanf("%lld",&B[i]);
        for (int i=0;i<p*q;i++) 
        scanf("%lld", &C[i]);
        for (int i=0;i<m;i++) {
            for (int j=0;j<p;j++) {
                long long sum=0;
                for (int k=0;k<n;k++) {
                    sum += A[i*n+k]*B[k*p+j];
                }
                Temp[i*p+j]=sum;
            }
        }
        for (int i=0;i<m;i++) {
            for (int j=0;j<q;j++) {
                long long sum=0;
                for (int k=0;k<p;k++) {
                    sum += Temp[i*p+k]*C[k*q+j];
                }
                D[i*q+j]=sum;
            }
        }
        for (int i=0;i<m;i++) {
            for (int j=0;j<q;j++) {
                printf("%lld ",D[i*q+j]);
            }
            printf("\n");
        }
    }
    return 0;
}