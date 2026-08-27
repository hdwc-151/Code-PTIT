/*Naive: Two pointer -> Meet in the Middle
#include <stdio.h>
int comparison(int n,int a[101],int b[101]) {
    for(int i=0;i<n;i++) if(a[i]!=b[i]) return 0;
    return 1;
}

void solve() {
    int n;scanf("%d",&n);
    int a[101],b[101];
    for(int i=0,j=n-1;i<n,j>=0;i++,j--) { // Parallel Iteration -> Chạy song song nhiều biến OR Nested 
        scanf("%lld",&a[i]);
        b[j]=a[i];
    }
    comparison(n,a,b)?printf("YES\n"):printf("NO\n");
}

int main () {
    int t;scanf("%d",&t);
    while(t--) solve();
    return 0;
}
*/

//Optimization
#include <stdio.h>
int isPalindrome(int n,int a[]) {
    for(int i=0;i<=n/2;i++) if(a[i]!=a[n-1-i]) return 0;
    return 1;
}

void solve () {
    int n;scanf("%d",&n);
    int a[101];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    //(isPalindrome(n,a))?printf("YES\n"):printf("NO\n");
    printf("%s\n",isPalindrome(n,a)?"YES":"NO");
}

int main() {
    int t; scanf("%d",&t);
    while(t--) solve();
    return 0;
}