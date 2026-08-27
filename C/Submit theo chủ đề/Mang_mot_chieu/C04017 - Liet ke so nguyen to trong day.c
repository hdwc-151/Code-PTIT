#include <stdio.h>
int isPrime(int n) {
    if(n<2||n>2&&n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}

int main() {
    int n; scanf("%d",&n);
    int a[101],count=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        isPrime(a[i])?count++:(a[i]=0);
    }
    printf("%d",count);
    for(int i=0;i<n;i++) if(a[i]!=0) printf(" %d",a[i]);
    return 0;
}