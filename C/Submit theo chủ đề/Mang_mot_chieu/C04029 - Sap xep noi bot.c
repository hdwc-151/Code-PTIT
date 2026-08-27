#include <stdio.h>
#include <stdbool.h>
int main() {
    int n; scanf("%d",&n);
    int a[101];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++) {
        bool check=false;
        for(int j=0;j<n-i-1;j++) 
            if(a[j]>a[j+1]) {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                check=true;
            }
        //if(check==false) break;
        if(!check) break;
        printf("Buoc %d: ",i+1);
        for(int j=0;j<n;j++) printf("%d ",a[j]);
        printf("\n");
    }
    return 0;
}