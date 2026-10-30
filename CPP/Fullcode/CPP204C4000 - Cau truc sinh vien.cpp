#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
    string msv,name,classs,born;
    float gpa;
};
void chuanhoa(string &s) {
    stringstream ss(s);
    string d,m,y;
    getline(ss,d,'/');
    getline(ss,m,'/');
    getline(ss,y,'/');
    if(d.length()<2) d="0"+d;
    if(m.length()<2) m="0"+m;
    s=d+'/'+m+'/'+y;
}
void nhapThongTinSV(SinhVien &a) {
    a.msv="N20DCCN001";
    getline(cin,a.name);
    cin >> a.classs >> a.born >> a.gpa;
    chuanhoa(a.born);
}
void inThongTinSV(SinhVien a) {
    cout << a.msv << " " << a.name << " " << a.classs << " " << a.born << " " << fixed << setprecision(2) << a.gpa << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}