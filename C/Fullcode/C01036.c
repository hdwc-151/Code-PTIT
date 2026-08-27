#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int so=1;
    while(n>0) {
        so *= n%10;
        n /= 10;
    }
    printf("%d",so);
    return 0;
}