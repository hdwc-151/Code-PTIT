#include <bits/stdc++.h>
using namespace std;
struct Staff {
    int stt;
    string msv,name,classs,email,company;
    void input() {
        cin >> msv;
        cin >> ws;
        getline(cin,name);
        cin >> classs >> email >> company;
    }
    void output() {
        cout << stt << " " << msv << " " << name << " " << classs << " " << email << " " << company << "\n";
    }
};
bool cmp(Staff a,Staff b) {
    return a.msv<b.msv;
}
void solve(Staff a[],int n) {
    string s; cin >> s;
    for(int i=0;i<n;i++) if(a[i].company==s) a[i].output();
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    Staff a[n];
    for(int i=0;i<n;i++) {
        a[i].stt=i+1;
        a[i].input();
    }
    sort(a,a+n,cmp);
    int q; cin >> q;
    while(q--) solve(a,n);
    return 0;
}