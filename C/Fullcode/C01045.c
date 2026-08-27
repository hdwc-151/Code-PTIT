#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int so=n;
    while(n>0) {
        if(n<10)
            printf("%d ",n);
            n/=10;
    }
    printf("%d",so%10);
    return 0;
}