#include <bits/stdc++.h>
using namespace std;
int n,k,cnt=0,a[25],visited[25];
void gen(int id) {
    if(id==n) {
        cnt++;
        for(int i=0;i<n;i++) cout << a[i] << ' ';
        cout << '\n';
        return;
    }
    if(a[id]!=0) {
        gen(id+1);
        return;
    }
    for(int val=1;val<=n;val++) {
        if(visited[val]==0) {
            a[id]=val;
            visited[val]=1;
            gen(id+1);
            a[id]=0;
            visited[val]=0;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(int i=0;i<k;i++) {
        int u,v; cin >> u >> v;
        if(u<1||n<u) {
            cout << 0;
            return 0;
        }
        if(v<1||n<v) {
            cout << 0;
            return 0;
        }
        if(a[u-1]!=0&&a[u-1]!=v) {
            cout << 0;
            return 0;
        }
        if(visited[v]&&a[u-1]!=v) {
            cout << 0;
            return 0;
        }
        a[u-1]=v;
        visited[v]=1;
    }
    gen(0);
    if(cnt==0) {
        cout << 0;
        return 0;
    }
    return 0;
}