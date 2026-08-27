#include <stdio.h>
int main() {
    int n;
    if (scanf("%d",&n) == 1) {
        int a[100005];
        long long sum=0;
        for (int i=0;i<n;i++) {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        printf("%.3f\n",(double)sum/n);
    }
    return 0;
}