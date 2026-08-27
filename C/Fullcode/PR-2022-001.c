#include <stdio.h>
int main() {
    int u0,d,n;
    long long sum=0; 
    if (scanf("%d %d %d",&u0,&d,&n) == 3) {
        int current_val=u0; 
        for (int i=0;i<n;i++) {
            sum += current_val; 
            current_val += d;  
        }
        printf("%lld",sum);
    }
    return 0;
}