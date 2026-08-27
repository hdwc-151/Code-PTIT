#include <stdio.h>
int main() {
    int m,n; scanf("%d%d",&m,&n);
    int arr[50][50];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    int a,b; scanf("%d%d",&a,&b);
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(j==a-1) printf("%d ",arr[i][b-1]);
            else if(j==b-1) printf("%d ",arr[i][a-1]);
            else printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}