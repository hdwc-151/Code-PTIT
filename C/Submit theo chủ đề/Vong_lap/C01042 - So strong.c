#include <stdio.h>
int sumFactorial(int k) {
    int factorial=1;
    for(int i=1;i<=k;i++)
        factorial=factorial*i;
    return factorial;
}

int main () {
    int n;scanf("%d",&n);
    long long sum=0,result=n;
    while(result>0) {
        sum+=sumFactorial(result%10);
        result/=10;
    }
    if(sum==n) printf("1\n");
    else printf("0\n");
    return 0;
}