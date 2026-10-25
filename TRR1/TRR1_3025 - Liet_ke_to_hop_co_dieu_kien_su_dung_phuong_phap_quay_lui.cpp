#include <bits/stdc++.h>
using namespace std;
int n,k,t,a[35];
void gen(int id) {
    if(id==k) {
        for(int i=0;i<k;i++) cout << a[i] << ' ';
        cout << '\n';
        return;
    }
    for(int val=a[id-1]+1;val<=n;val++) {
        a[id]=val;
        gen(id+1);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k >> t;
    a[0]=t;
    if(t+k-1>n) {
        cout << 0;
        return 0;
    }
    gen(1);
    return 0;
}