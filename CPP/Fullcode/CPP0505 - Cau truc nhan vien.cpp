#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
    string id,name,gender,born,addres,tax,date;
};
void nhap(NhanVien &a) {
    a.id="00001";
    getline(cin,a.name);
    cin >> a.gender >> a.born;
    cin.ignore();
    getline(cin,a.addres);
    cin >> a.tax >> a.date;
}
void in(NhanVien a) {
    cout << a.id << " " << a.name << " " << a.gender << " " << a.born << " " << a.addres << " " << a.tax << " " << a.date;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}