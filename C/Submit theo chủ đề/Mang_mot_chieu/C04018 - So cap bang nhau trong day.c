#include <stdio.h>
int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        int a[31];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        int count=0;
        for(int i=0;i<n-1;i++) if(a[i]==a[i+1]) count++; //Chặn bằng i tới i=n-1 => i+1=n để tránh vượt ngoài mảng. Do ta so sánh array[index] & array[index+1] -> Bằng nhau thì đếm +1
        printf("%d\n",count);
    }
    return 0;
}