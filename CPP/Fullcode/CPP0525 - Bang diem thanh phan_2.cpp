#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
    string msv,name,classs;
    double d1,d2,d3;
    void input() {
        cin >> ws;
        getline(cin,msv);
        getline(cin,name);
        getline(cin,classs);
        cin >> d1 >> d2 >> d3;
    }
    void output() {
        cout << msv << " " << name << " " << classs << " ";
        cout << fixed << setprecision(1) << d1 << " " << d2 << " " << d3 << "\n";
    }
};
    bool cmp(SinhVien a,SinhVien b) {
    return a.name<b.name;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    SinhVien a[n];
    for(int i=0;i<n;i++) a[i].input();
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++) {
        cout << i+1 << " ";
        a[i].output();
    }
    return 0;
}