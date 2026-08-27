#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool prime(int n) {
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++) 
        if(n%i==0)
            return 0;
    return 1;
}

bool check(int n) {
    int sum=0;
    while(n>0) {
        int x=n%10;
        sum += x;
        if(x != 2 && x != 3 && x != 5 && x != 7)
            return 0;
        n /= 10;
    }
    if(prime(sum))
        return 1;
    return 0;
}

void solve() {
    int m,n;
    scanf("%d %d",&m,&n);
    int d=0;
    for(int i=m;i<=n;i++) 
        if(check(i))
            if(prime(i))
                d++;
    printf("%d\n",d);
}

int main () {
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}