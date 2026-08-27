#include <stdio.h>
#include <math.h>
int UCLN(int a,int b) {
    while(b>0) {
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}

int tong_chu_so(int n) {
    int sum=0;
    while(n>0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int so_nguyen_to(int n) {
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0)
            return 0;
    }
    return 1;
}

void solve() {
    int a,b;
    scanf("%d %d",&a,&b);
    int ucln=UCLN(a,b);
    int tong=tong_chu_so(ucln);
    if(so_nguyen_to(tong))
        printf("YES\n");
    else
        printf("NO\n");
}

int main () {
    int t;
    scanf("%d",&t);
    while(t--) {
        solve();
    }
    return 0;
}