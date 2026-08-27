#include <stdio.h>
int main () {
    int a,b; scanf("%d%d",&a,&b);
    if(a>b) {
        int exchange=a;
        a=b;
        b=exchange;
    }
    printf("%lld",(long long) (a+b)*(b-a+1)/2);
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
int main () {
    long long a,b; scanf("%lld%lld",&a,&b);
    printf("%lld",(a+b)*(llabs(a-b)+1)/2);
    return 0;
}
*/