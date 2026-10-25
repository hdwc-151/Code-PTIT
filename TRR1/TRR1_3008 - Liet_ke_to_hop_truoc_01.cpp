#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,k; cin >> n >> k;
    vector<int> a(k+1);
    for(int i=1;i<=k;i++) cin >> a[i];
    int id=k;
    while(id>=1&&a[id]==id) id--;
    if(id==0) {
        cout << 0;
        return 0;
    }
    a[id]--;
    for(int i=id+1;i<=k;i++) a[i]=n-k+i;
    for(int i=1;i<=k;i++) cout << a[i] << ' ';
    return 0;
}