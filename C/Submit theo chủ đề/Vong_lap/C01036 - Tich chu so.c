#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int product=1;
    while(n>0) {
        product *= n%10;
        n/=10;
    }
    printf("%d",product);
    return 0;
}