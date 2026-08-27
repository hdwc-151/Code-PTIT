#include <stdio.h>
#define limit 2000000 
int a[limit+1]={0};
void eratosthenes() {
    for(int i=2;i*i<=limit;i++)
        if (a[i]==0)
            for(int j=i*i;j<=limit;j += i)
                if(a[j]==0)
                    a[j]=i;
    for(int i=2;i<=limit; i++)
        if(a[i]==0)
            a[i]=i;
}

int SUM(int n) {
    int s=0;
    while(n!=1) {
        s += a[n];
        n /= a[n];
    }
    return s;
}

int main() {
    eratosthenes();
    int n;
    scanf("%d",&n);
    long long sum=0;
    while (n--) {
        int x;
        scanf("%d",&x);
        sum += SUM(x);
    }
    printf("%lld",sum);
    return 0;
}