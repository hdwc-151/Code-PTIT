#include <bits/stdc++.h>
using namespace std;
int stt=1;
struct GiangVien {
public:
    string mgv,hoten,bomon,ten,mon;
    friend istream &operator >> (istream &is,GiangVien &a) {
        is >> ws;
        getline(is,a.hoten);
        getline(is,a.bomon);
        string s,res="";
        stringstream ss(a.bomon);
        while(ss >> s) res+=toupper(s[0]);
        a.mon=res;
        string code=to_string(stt++);
        if(code.length()<2) code="0"+code;
        a.mgv="GV"+code;
        return is;
    }
    friend ostream &operator << (ostream &os,GiangVien a) {
        os << a.mgv << " " << a.hoten << " " << a.mon << "\n";
        return os;
    }
};
bool finding(string keyword, string name) {
    transform(keyword.begin(),keyword.end(),keyword.begin(),::tolower);
    transform(name.begin(),name.end(),name.begin(),::tolower);
    return (name.find(keyword)!=string::npos);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    GiangVien a[1000];
    for(int i=0;i<n;i++) cin >> a[i];
    int q; cin >> q;
    while(q--) {
        cin >> ws;
        string str,s,res="";
        getline(cin,str);
        stringstream ss(str);
        while(ss >> s) res+=toupper(s[0]);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        for(int i=0;i<n;i++) if(finding(s,a[i].hoten)) cout << a[i];
    }
    return 0;
}