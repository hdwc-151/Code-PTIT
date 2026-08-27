/* Naive: String tăng-giảm
#include <stdio.h>
void swap(int*a,int*b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
void stringA(int a[101],int n) {
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[j]<a[i])
                swap(&a[i],&a[j]);
}
void stringB(int b[101],int n) {
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(b[j]>b[i])
                swap(&b[i],&b[j]);
}
int main() {
    int T; scanf("%d",&T);
    for(int t=1;t<=T;t++) {
        int n; scanf("%d",&n);
        int a[101],b[101];
        stringA(a,n);
        stringB(b,n);
        printf("Test %d:\n",t);
        for(int i=0;i<n;i++) printf("%d %d ",a[i],b[i]);
        printf("\n");
    }
    return 0;
}
*/

//qsort solution
#include <stdio.h>
#include <stdlib.h>
int cmpAsc(const void *a,const void *b) {
    return (*(int*)a-*(int*)b);
} //Mảng A tăng dần
int cmpDesc(const void *a,const void *b) {
    return (*(int*)b-*(int*)a);
} //Mảng B giảm dần
int main() {
    int T; scanf("%d",&T);
    for(int t=1;t<=T;t++) {
        int n; scanf("%d",&n);
        int a[101],b[101];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++) scanf("%d",&b[i]);
        qsort(a,n,sizeof(int),cmpAsc);
        qsort(b,n,sizeof(int),cmpDesc);
        printf("Test %d:\n",t);
        for(int i=0;i<n;i++) printf("%d %d ",a[i],b[i]);
        printf("\n");
    }
    return 0;
}