#include <stdio.h>
int main() {
    int n;
    if (scanf("%d",&n) == 1) {
        if (n == 0) {
            printf("0\n");
            return 0;
        }
        int bin[20];
        int k=0;
        while (n>0) {
            bin[k++] = n%2;
            n /= 2;
        }
        for (int i=k-1;i>=0;i--) {
            printf("%d",bin[i]);
        }
        printf("\n");
    }
    return 0;
}