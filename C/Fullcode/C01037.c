#include <stdio.h>
int main () {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b) {
        int doi_cho=a;
        a=b;
        b=doi_cho;
    }
    printf("%lld",(long long) (a+b)*(b-a+1)/2);
    return 0;
}