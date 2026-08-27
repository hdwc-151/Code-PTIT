//String nhanh và duyệt chính xác  chuỗi -> Dùng phép trừ nên nhanh hơn phép chia
#include <stdio.h>
#include <string.h>
int check(char s[]) {
    int len=strlen(s);
    for(int i=0;i<len;i++) {
        int digit=s[i]-'0';
        if(digit%2!=0) return 0;
    }
    return 1;
}
int main () {
    int t;scanf("%d",&t);
    while(t--) {
        char s[20];scanf("%s",s);
        if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
/*
- Naive: Thuần logic số
#include <stdio.h>
int check(long long n) {
    if(n==0) return 1;
    while(n>0) {
        int digit=n%10;
        if(digit%2!=0) return 0;
        n/=10;
    }
    return 1;
}
int main () {
    int t;scanf("%d",&t);
    while(t--) {
        long long n;scanf("%lld",&n);
        if(check(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

- Fast I/O
#include <stdio.h>
#include <string.h>
void solve() {
    char c;
    int isSpeacial=1;
    while( (c=getchar()) == ' ' || c == '\n' );
    while(c>='0' && c<='9') {
        if((c-'0')%2!=0) isSpeacial=0;
        c=getchar();
    }
    if(isSpeacial) printf("YES\n");
    else printf("NO\n");
}
int main () {
    int t;scanf("%d",&t);
    while(t--) solve();
    return 0;
}
*/