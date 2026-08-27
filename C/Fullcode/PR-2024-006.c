#include <stdio.h>
#include <stdlib.h>
int a[100005],b[100005],c[200005];
int cmp_asc(const void *x,const void *y) {
    return (*(int*)x - *(int*)y);
}
int cmp_desc(const void *x,const void *y) {
    return (*(int*)y - *(int*)x);
}

void solve() {
    int m,n;
    char type;
    scanf("%d %d %c",&m,&n,&type);
    for (int i=0;i<m;i++) {
        scanf("%d",&a[i]);
        c[i] = a[i];
    }
    for (int i=0;i<n;i++) {
        scanf("%d",&b[i]);
        c[m + i] = b[i];
    }
    if (type == 'T') {
        qsort(c,m+n,sizeof(int),cmp_asc);
        for (int i=0;i<m+n;i++) 
		printf("%d ",c[i]);
        printf("\n");
    } 
    else if (type == 'G') {
        qsort(c,m+n,sizeof(int),cmp_desc);
        for (int i=0;i<m+n;i++) 
		printf("%d ",c[i]);
        printf("\n");
    } 
    else if (type == 'F') {
        for (int i=0;i<m;i++) 
		printf("%d ",a[i]);
        for (int i=0;i<n;i++) 
		printf("%d ",b[i]);
        printf("\n");
    } 
    else if (type == 'A') {
        for (int i=0;i<n;i++) 
		printf("%d ",b[i]);
        for (int i=0;i<m;i++) 
		printf("%d ",a[i]);
        printf("\n");
    }
}

int main() {
    int t;
    if (scanf("%d",&t) == 1) {
        while (t--) 
		solve();
    }
    return 0;
}