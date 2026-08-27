#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s) {
    if(!s.empty()&&s[s.length()-1]=='\r') s.erase(s.length()-1);
}
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
    getline(is,a.nameKH); chuanhoa(a.nameKH);
    getline(is,a.gender); chuanhoa(a.gender);
    getline(is,a.born); chuanhoa(a.born);
    getline(is,a.address); chuanhoa(a.address);
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
    getline(is,a.nameMH); chuanhoa(a.nameMH);
    getline(is,a.unit); chuanhoa(a.unit);
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
    long long quantity;
    friend istream &operator >> (istream &is,HoaDon &a) {
        is >> a.idKH >> a.idMH >> a.quantity;
        string s=to_string(hd_stt++);
        while(s.length()<3) s="0"+s;
        a.idHD="HD"+s;
        return is;
    }
    friend ostream &operator << (ostream &os,HoaDon a) {
        KhachHang kh=KH_map[a.idKH];
        MatHang mh=MH_map[a.idMH];
        long long money=mh.retail*a.quantity;
        os << a.idHD << " "  << kh.nameKH << " "  << kh.address << " "  << mh.nameMH << " "  << mh.unit << " "  << mh.purchase << " "  << mh.retail << " "  << a.quantity << " "  << money << "\n";
        return os;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n=0; 
    ifstream inKH("KH.in");
    if (inKH.is_open()) {
        inKH >> n;
        KhachHang tmpKH;
        for(int i=0;i<n;i++) inKH >> tmpKH;
    }
    inKH.close();
    int m=0; 
    ifstream inMH("MH.in");
    if (inMH.is_open()) {
        inMH >> m;
        MatHang tmpMH;
        for(int i=0;i<m;i++) inMH >> tmpMH;
    }
    inMH.close();
    int k=0; 
    ifstream inHD("HD.in");
    if (inHD.is_open()) {
        inHD >> k;
        HoaDon tmpHD;
        for(int i=0;i<k;i++) {
            inHD >> tmpHD;
            cout << tmpHD;
        }
    }
    inHD.close();
    return 0;
}