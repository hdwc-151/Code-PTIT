#include <stdio.h>
int main() {
    int n; scanf("%d",&n);
    int a[105],b[100005]={0};
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        b[a[i]]++; //Đếm xem ô nhớ xuất hiện bao lần
    }
    int flag=0;
    for(int i=0;i<n;i++) 
        if(b[a[i]]>1) {
            printf("%d ",a[i]);
            b[a[i]]=0;
            flag=1;
        }
    if(flag==0) printf("0");
    return 0;
}