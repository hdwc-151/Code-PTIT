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
        string s1;
        stringstream ss1(a.hoten);
        while(ss1 >> s1) a.ten=s1;
        string s2,res="";
        stringstream ss2(a.bomon);
        while(ss2 >> s2) res+=toupper(s2[0]);
        a.mon=res;
        string s=to_string(stt++);
        if(s.length()<2) s="0"+s;
        a.mgv="GV"+s;
        return is;
    }
    friend ostream &operator << (ostream &os,GiangVien a) {
        os << a.mgv << " " << a.hoten << " " << a.mon << "\n";
        return os;
    }
};
bool cmp(GiangVien a,GiangVien b) {
    if(a.ten==b.ten) return a.mgv<b.mgv;
    return a.ten<b.ten;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    GiangVien a[1000];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++) cout << a[i];
    return 0;
}