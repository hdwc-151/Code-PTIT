#include <bits/stdc++.h>
using namespace std;
class KhachHang; class MatHang; class HoaDon;
int kh_stt=1,mh_stt=1,hd_stt=1;
class KhachHang {
public:
    string idKH,nameKH,gender,born,address;
    friend class HoaDon;
    friend istream &operator >> (istream &is,KhachHang &a);
};
map<string,KhachHang> KH_map;
istream &operator >> (istream &is,KhachHang &a) {
    is >> ws;
    getline(is,a.nameKH);
    getline(is,a.gender);
    getline(is,a.born);
    getline(is,a.address);
    string s=to_string(kh_stt++);
    while(s.length()<3) s="0"+s;
    a.idKH="KH"+s;
    KH_map[a.idKH]=a;
    return is;
}
class MatHang {
public:
    string idMH,nameMH,unit;
    long long purchase,retail;
    friend class HoaDon;
    friend istream &operator >> (istream &is,MatHang &a);
};
map<string,MatHang> MH_map;
istream &operator >> (istream &is,MatHang &a) {
    is >> ws;
    getline(is,a.nameMH);
    getline(is,a.unit);
    is >> a.purchase >> a.retail;
    string s=to_string(mh_stt++);
    while(s.length()<3) s="0"+s;
    a.idMH="MH"+s;
    MH_map[a.idMH]=a;
    return is;
}
class HoaDon {
public:
    string idHD,idKH,idMH;
    long long quantity,profit; //add
    friend istream &operator >> (istream &is,HoaDon &a) {
        is >> a.idKH >> a.idMH >> a.quantity;
        string s=to_string(hd_stt++);
        while(s.length()<3) s="0"+s;
        a.idHD="HD"+s;
        MatHang mh=MH_map[a.idMH];
        a.profit=(mh.retail-mh.purchase)*a.quantity;
        return is;
    }
    friend ostream &operator << (ostream &os,HoaDon a) {
        KhachHang kh=KH_map[a.idKH];
        MatHang mh=MH_map[a.idMH];
        long long money=mh.retail*a.quantity;
        os << a.idHD << " "  << kh.nameKH << " "  << kh.address << " "  << mh.nameMH << " "  << a.quantity << " "  << money << " " << a.profit << "\n";
        return os;
    }
};
bool cmp(HoaDon a,HoaDon b) {
    if(a.profit==b.profit) return a.idHD<b.idHD;
    return a.profit>b.profit;
}
void sapxep(HoaDon dshd[],int k) {
    sort(dshd,dshd+k,cmp);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int n,m,k;
    cin >> n;
    for(int i=0;i<n;i++) cin >> dskh[i];
    cin >> m;
    for(int i=0;i<m;i++) cin >> dsmh[i];
    cin >> k;
    for(int i=0;i<k;i++) cin >> dshd[i];
    sapxep(dshd,k);
    for(int i=0;i<k;i++) cout << dshd[i];
    return 0;
}