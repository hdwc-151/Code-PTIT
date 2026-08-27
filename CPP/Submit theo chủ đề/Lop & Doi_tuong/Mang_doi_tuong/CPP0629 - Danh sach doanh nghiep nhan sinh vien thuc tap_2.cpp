#include <bits/stdc++.h>
using namespace std;
class DoanhNghiep {
public:
    string ma,ten;
    int soluong;
    friend istream &operator >> (istream &is,DoanhNghiep &a) {
        is >> a.ma;
        is >> ws;
        getline(is,a.ten);
        is >> a.soluong;
        return is;
    }
    friend ostream &operator << (ostream &os,DoanhNghiep a) {
        os << a.ma << " " << a.ten << " " << a.soluong << "\n";
        return os;
    }
};
bool cmp(DoanhNghiep a,DoanhNghiep b) {
    if(a.soluong!=b.soluong) return a.soluong>b.soluong;
    return a.ma<b.ma;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    DoanhNghiep a[1000];
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n,cmp);
    int q; cin >> q;
    while(q--) {
        int l,r; cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:\n";
        for(int i=0;i<n;i++) if(a[i].soluong>=l&&a[i].soluong<=r) cout << a[i];
    }
    return 0;
}