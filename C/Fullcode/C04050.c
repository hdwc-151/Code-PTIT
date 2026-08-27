#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int markA[1001]={0};
    int markB[1001]={0};
    int x;
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        markA[x]=1;
    }
    for(int i=0;i<m;i++) {
        scanf("%d",&x);
        markB[x]=1;
    }
    for(int i=1;i<=1000;i++) {
        if(markA[i] && markB[i]) {
            printf("%d ",i);
        }
    }
    printf("\n");
    for(int i=1;i<=1000;i++) {
        if (markA[i] && !markB[i]) {
            printf("%d ",i);
        }
    }
    printf("\n");
    for(int i=1;i<=1000;i++) {
        if(!markA[i] && markB[i]) {
            printf("%d ",i);
        }
    }
    return 0;
}