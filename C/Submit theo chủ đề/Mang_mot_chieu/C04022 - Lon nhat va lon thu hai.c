/* qsort solution O(N^2)
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b) {
    return (*(int*)a-*(int*)b);
}
//qsort cần 1 hàm so sánh input => cmp: ép trỏ vô danh thành int -> Lấy value a-b --> result >0 => a lớn hơn b -> Sắp xếp mảng
int main() {
    int n; scanf("%d",&n);
    int a[101];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    int max1=a[n-1],max2; // Lấy phần tử cuối cùng (lớn nhất)
    for(int i=n-2;i>0;i--)
        if(a[i]!=max1) {
            max2=a[i];
            break;
        }
    printf("%d %d",max1,max2);
    return 0;
}
*/

//Optimization: 
#include <stdio.h>
int main() {
    int n; scanf("%d",&n);
    int max1=-1e9,max2=-1e9;
    for(int i=0;i<n;i++) {
        int val; scanf("%d",&val);
        if(val>max1) {
            max2=max1;
            max1=val;
        }
        else if(val>max2&&val!=max1) max2=val;
    }
    printf("%d %d",max1,max2);
    return 0;
}