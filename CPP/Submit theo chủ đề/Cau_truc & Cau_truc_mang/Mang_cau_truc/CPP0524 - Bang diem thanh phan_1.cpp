#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
    string msv,name,classs;
    double d1,d2,d3;
};
void nhap(SinhVien &a) {
    cin >> ws;
    getline(cin,a.msv);
    getline(cin,a.name);
    getline(cin,a.classs);
    cin >> a.d1 >> a.d2 >> a.d3;
}
bool cmp(SinhVien a,SinhVien b) {
    return a.msv<b.msv;
}
void sap_xep(SinhVien ds[],int n) {
    sort(ds,ds+n,cmp);
}
void in_ds(SinhVien ds[],int n) {
    for(int i=0;i<n;i++) {
        cout << i+1 << " " << ds[i].msv << " " << ds[i].name << " " << ds[i].classs << " ";
        cout << fixed << setprecision(1) << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3 << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    struct SinhVien *ds=new SinhVien[n];
    for(int i=0;i<n;i++) nhap(ds[i]);
    sap_xep(ds,n);
    in_ds(ds,n);
    return 0;
}