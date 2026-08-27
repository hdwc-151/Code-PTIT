#include <stdio.h>
int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        long long min_a=2000000; 
        long long min_b=2000000;
        for (int i=0;i<n;i++) {
            long long a,b;
            scanf("%lld %lld",&a,&b);
            if (a<min_a) min_a=a;
            if (b<min_b) min_b=b;
        }
        printf("%lld\n",min_a*min_b);
    }
    return 0;
}