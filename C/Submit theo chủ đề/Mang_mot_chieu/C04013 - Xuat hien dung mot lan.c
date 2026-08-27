#include <stdio.h>
int main() {
    int n; scanf("%d",&n);
    int a[105],freq[100005]={0}; //Mảng frequency lưu tần số xuất hiện của phần tử trong mảng
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        freq[a[i]]++;
    }
    int b[105],nb=0; //Biến đếm số lượng phần tử đã được cất vào mảng b
    for(int i=0;i<n;i++) if(freq[a[i]]==1) b[nb++]=a[i]; //Đưa a[i] vào vị trí nb của arr b[]
    printf("%d\n",nb);
    for(int i=0;i<nb;i++) printf("%d ",b[i]);
    return 0;
}