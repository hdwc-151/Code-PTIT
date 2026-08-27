#include <stdio.h>
void solve() {
    char c;
    int count=0,the_last_digit=0;
    while((c=getchar())==' '||c=='\n');
    while(c>='0'&&c<='9') {
        int digit=c-'0';
        count += (digit%2==0) ? 1 : -1;
        the_last_digit=digit;
        c=getchar();
    }
    printf("%s\n",(the_last_digit%2!=0 && count<0) ? "YES" : "NO");
}
int main () {
    int t;scanf("%d",&t);
    while(t--) {
        //long long n;scanf("%lld",&n);
        solve();
    }
    return 0;
}

/*Naive
#include <stdio.h>
#define ll long long
int check(ll n) {
    int count=0;
    while(n>0) {
        int digit=n%10;
        count += (digit%2!=0) ? 1 : -1;
        n/=10;
    }
    if(count>0) return 1;
    return 0;
}
int main () {
    int t;scanf("%d",&t);
    while(t--) {
        ll n;scanf("%lld",&n);
        (check(n)) ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}
*/

/*strlen(s)
#include <stdio.h>
#include <string.h>
int check(char s[]) {
    int l=strlen(s);
    int even=0,odd=0;
    for(int i=0;i<l;i++) ( (s[i]-'0')%2==0 ) ? even++ : odd++;
    if( (s[l-1]-'0')%2!=0 && even<odd) return 1;
    return 0;
}
void solve() {
    char s[20]; scanf("%s",s);
    printf("%s\n",(check(s))?"YES":"NO");
}
int main () {
    int t;scanf("%d", &t);
    while (t--) solve();
    return 0;
}
*/