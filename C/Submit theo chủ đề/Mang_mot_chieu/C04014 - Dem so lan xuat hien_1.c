#include <stdio.h>
int main() {
    int n; scanf("%d",&n);
    int a[105],freq[100005]={0};
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        freq[a[i]]++; //Đếm phân phối
    }
    for(int i=0;i<n;i++)
        if(freq[a[i]]>0) {
            printf("%d %d\n",a[i],freq[a[i]]);
            freq[a[i]]=0;
        }
        return 0;
}