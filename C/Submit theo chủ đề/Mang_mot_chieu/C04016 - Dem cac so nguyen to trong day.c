#include <stdio.h>
int isPrime(int n) {
    if(n<2||n>2&&n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}
void solve(int t) {
    int n; scanf("%d",&n);
    int a[101],freq[100005]={0},max=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
        if(isPrime(a[i])==1) freq[a[i]]++;
    }
    printf("Test %d:\n",t);
    for(int i=2;i<=max;i++) if(freq[i]>=1) printf("%d xuat hien %d lan\n",i,freq[i]);
}
int main() {
    int T; scanf("%d",&T);
    for(int t=1;t<=T;t++) solve(t);
    return 0;
}