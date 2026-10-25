#include <bits/stdc++.h>
using namespace std;
int n,k,cnt=0,a[35];
void gen(int id) {
    if(id==n) {
        cnt++;
        for(int i=0;i<n;i++) cout << a[i] << ' ';
        cout << '\n';
        return;
    }
    if(a[id]!=-1) {
        gen(id+1);
        return;
    }
    a[id]=0;
    gen(id+1);
    a[id]=1;
    gen(id+1);
    a[id]=-1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    memset(a,-1,sizeof(a));
    cin >> n >> k;
    for(int i=0;i<k;i++) {
        int u,v; cin >> u >> v;
        if(a[u-1]!=-1&&a[u-1]!=v) {
            cout << 0;
            return 0;
        }
        a[u-1]=v;
    }
    gen(0);
    if(cnt==0) {
        cout << 0;
        return 0;
    }
    return 0;
}