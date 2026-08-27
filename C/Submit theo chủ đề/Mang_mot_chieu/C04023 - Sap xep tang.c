/* 
#include <stdio.h>
void swap(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j]) swap(&a[i],&a[j]);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
*/

/*  qsort
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b) {
    return (*(int*)a-*(int*)b);
}
int main() {
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
*/

//Couting sort -> WA solution
#include <stdio.h>
int count[1001]={0};
int main() {
    int n; scanf("%d",&n);
    for(int i=0;i<n;i++) {
        int val; scanf("%d",&val);
        count[val]++;
    }
    for(int i=0;i<=1000;i++) {
        while(count[i]>0) {
            printf("%d ",i);
            count[i]--;
        }
    }
    return 0;
}