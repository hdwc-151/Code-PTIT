#include <stdio.h>
void solve(int t) {
    int n; scanf("%d",&n);
    int a[105],freq[100005]={0};
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        freq[a[i]]++;
    }
    printf("Test %d:\n",t);
    for(int i=0;i<n;i++)
        if(freq[a[i]]>=1) {
            printf("%d xuat hien %d lan\n",a[i],freq[a[i]]);
            freq[a[i]]=0;
        }
}
int main() {
    int T; scanf("%d",&T);
    for(int t=1;t<=T;t++) solve(t);
    return 0;
}