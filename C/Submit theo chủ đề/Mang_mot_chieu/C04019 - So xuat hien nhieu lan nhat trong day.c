#include <stdio.h>
void solve() {
    int n; scanf("%d",&n);
    int a[31],freq[30001]={0},count=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        freq[a[i]]++;
        if(freq[a[i]]>count) count=freq[a[i]];
    }
    for(int i=0;i<n;i++) {
        if(freq[a[i]]==count) {
            printf("%d ",a[i]); //Ngay khi vừa tăng tuần suất lên check xem tần số phần tử đó có = count hay không?
            freq[a[i]]=0; 
        }
    }
    printf("\n");
}

int main() {
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}