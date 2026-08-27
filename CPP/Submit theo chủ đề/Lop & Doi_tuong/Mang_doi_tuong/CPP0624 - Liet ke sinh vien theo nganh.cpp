#include <bits/stdc++.h>
using namespace std;
class SinhVien {
public:
    string msv,name,classs,email;
    friend istream &operator >> (istream &is,SinhVien &a) {
        is >> a.msv;
        is >> ws;
        getline(is,a.name);
        is >> a.classs >> a.email;
        return is;
    }
    friend ostream &operator << (ostream &os,SinhVien a) {
        os << a.msv << " " << a.name << " " << a.classs << " " << a.email << "\n";
        return os;
    }
};
string solve(string s) {
    if(s=="Ke toan") return "KT";
    if(s=="Cong nghe thong tin") return "CN";
    if(s=="An toan thong tin") return "AT";
    if(s=="Vien thong") return "VT";
    if(s=="Dien tu") return "DT";
    return "";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    SinhVien a[1000];
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    int q; cin >> q;
    while(q--) {
        cin >> ws;
        string s;
        getline(cin,s);
        string major=solve(s);
        string in_hoa=s;
        transform(in_hoa.begin(),in_hoa.end(),in_hoa.begin(),::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << in_hoa << ":\n";
        for(int i=0;i<n;i++) {
            string sv_major=a[i].msv.substr(5,2);
            if(sv_major==major) {
                if(major=="CN"||major=="AT") if(a[i].classs[0]=='E') continue;
                cout << a[i];
            }
        }
    }
    return 0;
}