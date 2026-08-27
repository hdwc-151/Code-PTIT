/*Naive
#include <stdio.h>
int solve(int a[55],int i) {
    for(int j=i-1;j>=0;j--) if(a[i]<a[j]) return 0;
    return 1;
}

int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        int a[55];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        int count=0;
        for(int i=0;i<n;i++) if(solve(a,i)) count++;
        printf("%d\n",count);
    }
    return 0;
}
*/

#include <stdio.h>
void process() {
    int n,val; scanf("%d",&n);
    int count=0,MAX=-1e9;
    for(int i=0;i<n;i++) {
        scanf("%d",&val);
        if(val>=MAX) {
            count++;
            MAX=val;
        }
    }
    printf("%d\n",count);
}
int main() {
    int t; scanf("%d",&t);
    while(t--) process();
    return 0;
}