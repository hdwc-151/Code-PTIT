/*
#include <stdio.h>
#include <math.h>
int check(int n) {
    int k=n%10;
    while(n>0) {
        if(n%10>k) return 0;
        k=n%10;
        n/=10;
    }
    return 1;
}
int main () {
    int t;scanf("%d",&t);
    while(t--) {
        int n;scanf("%d",&n);
        int a=pow(10,n-1);
        int b=pow(10,n)-1;
        for(int i=a;i<=b;i++) {
            if(check(i)) printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
*/

#include <stdio.h>
int n,a[20];
void Try(int index) {
    if(index>n) {
        for(int i=1;i<=n;i++) printf("%d",a[i]);
        printf(" ");
        return;
    }
    int start=(index==1)?1:a[index-1];
    for(int i=start;i<=9;i++) {
        a[index]=i;
        Try(index+1);
    }
}
int main () {
    int t;scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        Try(1);
    }
    return 0;
}