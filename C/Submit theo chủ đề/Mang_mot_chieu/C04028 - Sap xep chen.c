#include <stdio.h>
int main() {
    int n; scanf("%d",&n);
    int a[101];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        int key=a[i],j=i-1;
        while(j>=0&&a[j]>key) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        printf("Buoc %d: ",i);
        for(int j=0;j<=i;j++) printf("%d ",a[j]);
        printf("\n");
    }
    return 0;
}