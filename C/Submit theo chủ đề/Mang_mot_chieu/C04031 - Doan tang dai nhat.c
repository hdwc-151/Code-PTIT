/* Dùng mảng phụ b[n]
#include <stdio.h>
int solve(int a,int b) {
    return (a>b)?a:b;
}
int main () {
    int T; scanf("%d",&T);
    for(int t=1;t<=T;t++) {
        int n; scanf("%d",&n);
        int a[n],b[n];
        int max=1;
        scanf("%d",&a[0]);
        b[0]=1;
        for(int i=1;i<n;i++) {
            scanf("%d",&a[i]);
            b[i]=(a[i]>a[i-1])?(b[i-1]+1):1;
            max=solve(max,b[i]);
        }
        printf("Test %d:\n%d\n",t,max);
        for(int i=0;i<=n-max;i++)
            if(b[i+max-1]==max) {
                for(int j=0;j<max;j++) printf("%d ",a[i+j]);
                printf("\n");
                i+=max-1;
            }
    }
    return 0;
}
*/

#include <stdio.h>
void solve(int t) {
    int n; scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    int max=1,current=1;
    for(int i=1;i<n;i++) {
        scanf("%d",&a[i]);
        current=(a[i]>a[i-1])?(current+1):1;
        if(current>max) max=current;
    }
    printf("Test %d:\n%d\n",t,max);
    current=0;
    for(int i=0;i<n;i++) {
        current=(i==0||a[i]>a[i-1])?(current+1):1;
        if(current==max) {
            for(int j=i-max+1;j<=i;j++) printf("%d ",a[j]);
            printf("\n");
        }
    }
}
int main() {
    int T; scanf("%d",&T);
    for(int t=1;t<=T;t++) solve(t);
    return 0;
}

// code sai
// #include <stdio.h>
// void solve(int t) {
//     int n; scanf("%d",&n);
//     int a[n];
//     scanf("%d",&a[0]);
//     int max=1,current=1;
//     for(int i=1;i<n;i++) {
//         scanf("%d",&a[i]);
//         current=(a[i]>a[i-1])?(current+1):1;
//         if(current>max) max=current;
//     }
//     printf("Test %d:\n%d\n",t,max);
//     current=0;
//     for(int i=0;i<n;i++) {
//         current=(i==0||a[i]>a[i-1])?(current+1):1;
//         if(current==max) for(int j=i-max+1;j<=i;j++) printf("%d ",a[j]);
//     }
//     printf("\n");
// }
// int main() {
//     int T; scanf("%d",&T);
//     for(int t=1;t<=T;t++) solve(t);
//     return 0;
// }