#include <stdio.h>
#include <math.h>
int main() {
    long long x,y;
    while (scanf("%lld %lld",&x,&y) == 2) {
        long long d=y-x;
	if (d<0)
	    d=-d;
        if (d == 0) {
            printf("0\n");
            continue;
        }
        long long n=(long long)sqrt((double)d);
        if (n*n>d) {
            n--;
        }
        if (n*n == d) {
            printf("%lld\n",2*n-1);
        } 
        else if (d <= n*n+n) {
            printf("%lld\n", 2*n);
        } 
        else {
            printf("%lld\n",2*n+1);
        }
    }
    return 0;
}