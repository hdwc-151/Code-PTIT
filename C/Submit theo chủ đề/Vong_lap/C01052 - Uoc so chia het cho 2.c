//Optimization
#include <stdio.h>
int main () {
    int t;scanf("%d",&t);
    while(t--) {
        int n;scanf("%d",&n);
        int count=0;
        for(int i=1;i<=n/i;i++) {
            if(n%i==0) {
                if(i%2==0) count++;
                if(i!=n/i) {
                    if((n/i)%2==0) count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

/*Naive
#include <stdio.h>
int main () {
    int t;scanf("%d",&t);
    while(t--) {
        int n;scanf("%d",&n);
        int count=0;
        for(int i=1;i<=n/i;i++) {
            if(n%i==0) {
                if(i%2==0) count++;
                if((n/i)%2==0) count++;
                if(i*i==n && i%2==0) count=count-1;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
*/