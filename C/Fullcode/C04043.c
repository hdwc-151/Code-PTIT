#include <stdio.h>
#include <stdlib.h>
int cmp_ll(const void *a,const void *b) {
    long long diff = (*(long long*)a - *(long long*)b);
    if (diff > 0) 
        return 1;
    if (diff < 0) 
        return -1;
    return 0;
}

void solve() {
    int n;
    scanf("%d",&n);
    long long a[5005];
    for (int i=0;i<n;i++) {
        long long x;
        scanf("%lld",&x);
        a[i] = x*x;
    }
    qsort(a,n,sizeof(long long),cmp_ll);
    int found=0;
    for (int i=n-1;i>=2;i--) {
        int l=0,r=i-1;
        while (l<r) {
            if (a[l] + a[r] == a[i]) {
                found=1;
                break;
            } 
            else if (a[l] + a[r] < a[i]) {
                l++;
            } 
            else {
                r--;
            }
        }
        if (found) 
            break;
    }

    if (found) 
        printf("YES\n");
    else 
        printf("NO\n");
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) 
            solve();
    }
    return 0;
}