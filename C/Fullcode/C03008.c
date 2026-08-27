#include <stdio.h>
#include <math.h>
int solve(int n) {
    int result=1;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0)
            result=result+i+n/i;
        if(i*i==n)
            result=result-i;
    }
    return result;
}

int main () {
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++) {
        if(solve(i)==i)
            printf("%d ",i);
    }
    return 0;
}