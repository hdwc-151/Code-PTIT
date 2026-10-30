#include <bits/stdc++.h>
using namespace std;
const int MAX=2e4+5;
int a[MAX],s[MAX],len;
void add(int x,int delta) {
    for(int i=2;i*i<=x;i++)
        while(x%i==0) {
            s[i]+=delta;
            x/=i;
        }
    if(x!=1) s[x]+=delta;
}
void multi(int x) {
    len+=5;
    for(int i=0;i<len;i++) a[i]*=x;
    for(int i=0;i<len;i++) {
        a[i+1]+=a[i]/10;
        a[i]%=10;
    }
    while(len>0&&!a[len-1]) len--;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    memset(a,0,sizeof(a));
    memset(s,0,sizeof(s));
    int n; cin >> n;
    n++;
    for(int i=1;i<=n;i++) add(2*n-i+1,1);
    for(int i=1;i<=n+1;i++) add(i,-1);
    a[0]=len=1;
    for(int i=1;i<MAX;i++)
        while(s[i]>0) {
            multi(i);
            s[i]--;
        }
    for(int i=len-1;i>=0;i--) cout << a[i];
    cout << "\n";
    return 0;
}