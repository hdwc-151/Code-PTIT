#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int chan=0,le=0, x;
    while(n>0) {
        x=n%10;
        if(x%2==0)
            chan++;
        else
            le++;
        n/=10;
    }
    printf("%d %d ",le,chan);
    return 0;
}