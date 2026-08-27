#include <stdio.h>
int solve(int n) {
    if(n<2||n>2&&n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2) if(n%i==0) return 0;
    return 1;
}
int main() {
    int n; scanf("%d",&n);
    int a[50][50];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    int sum=0;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            if(solve(a[i][j])) sum += a[i][j];
    printf("%d",sum);
    return 0;
}