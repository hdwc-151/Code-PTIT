#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n,m,k;
    if (scanf("%d %d %d",&n,&m,&k) == 3) {
        int pos[1005];
        for (int i=0;i<m;i++) {
            scanf("%d",&pos[i]);
        }
        qsort(pos,m,sizeof(int),cmp);
        int covered=0;
        int ans=0;
        int light_reach=2*k+1;
        for (int i=0;i<m;i++) {
            if (pos[i] - k - 1 > covered) {
                int gap = pos[i] - k - 1 - covered;
                int count = (gap + light_reach - 1) / light_reach; 
                ans += count;
            }
            if (pos[i] + k > covered) {
                covered = pos[i] + k;
            }
        }
        if (covered < n) {
            int gap = n - covered;
            ans += (gap + light_reach - 1) / light_reach; 
        }
        printf("%d\n",ans);
    }
    return 0;
}