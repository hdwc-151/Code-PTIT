#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++) {
        while(n%i==0) {
            n/=i;
            printf("%d",i); 
            if (n!=1) printf("x");
        }
    }
    if (n>1) printf("%d",n);
    return 0;
}