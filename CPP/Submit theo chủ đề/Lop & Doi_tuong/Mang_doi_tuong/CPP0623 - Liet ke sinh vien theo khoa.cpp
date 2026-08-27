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
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    SinhVien a[1000];
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    int q; cin >> q;
    while(q--) {
        string s; cin >> s;
        cout << "DANH SACH SINH VIEN KHOA " << s << ":\n";
        for(int i=0;i<n;i++) if(a[i].classs[1]==s[2]&&a[i].classs[2]==s[3]) cout << a[i];
    }
    return 0;
}