#include <stdio.h>
int main() {
    int n;
    if (scanf("%d",&n) == 1) {
        int a[105];
        for (int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
        for (int i=0;i<n-1;i++) {
            int min_idx=i;
            for (int j=i+1;j<n;j++) {
                if (a[j] < a[min_idx]) {
                    min_idx=j;
                }
            }
            int temp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = temp;
            for (int j=0;j<n;j++) {
                printf("%d ",a[j]);
            }
            printf("\n");
        }
    }
    return 0;
}