/*Naive: 1. Nhập và tìm max 2. Tìm và in vị trí
#include <stdio.h>
void solve() {
    int n; scanf("%d",&n);
    int a[101],max=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
    }
    printf("%d\n",max);
    for(int i=0;i<n;i++) {
        if(a[i]==max) printf("%d ",i);
    }
    printf("\n");
}
int main() {
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}
*/

//Optimization: dùng một mảng phụ ans[] để lưu các vị trí -> Nếu gặp một phần tử > max: Ta vứt bỏ hết các vị trí cũ đã lưu, cập nhật max mới và lưu vị trí mới này vào đầu mảng ans[] | Nếu gặp phần tử = max: Ta chỉ việc nhét thêm vị trí của nó vào mảng ans[]
#include <stdio.h>
void solve() {
    int n,val; scanf("%d",&n);
    int max=-1,ans[101],count=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&val);
        if(val>max) {
            max=val; //Lưu max vào biến đệm value
            count=0; //Reset index cho max
            ans[count++]=i; //Lưu vị trí mới
        }
        else if(val==max) {
            ans[count++]=i; //Thêm vị trí vào danh sách hiện tại
        }
    }
    printf("%d\n",max);
    for(int i=0;i<count;i++) {
        printf("%d ",ans[i]);
    }
    printf("\n");
}
int main() {
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}