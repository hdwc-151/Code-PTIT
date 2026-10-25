#include <bits/stdc++.h>
using namespace std;
int n,k,t,cnt=0,a[35];
void gen(int id,int preval) {
    if(id==k-1) {
        cnt++;
        for(int i=0;i<k;i++) cout << a[i] << ' ';
        cout << '\n';
        return;
    }
    for(int val=preval+1;val<t;val++) {
        a[id]=val;
        gen(id+1,val);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k >> t;
    a[k-1]=t;
    gen(0,0);
    if(cnt==0) {
        cout << 0;
        return 0;
    }
    return 0;
}