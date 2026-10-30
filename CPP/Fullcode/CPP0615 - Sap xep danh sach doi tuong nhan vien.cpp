#include <bits/stdc++.h>
using namespace std;
int stt=1;
class NhanVien {
public:
    string id,name,gender,born,address,tax,date;
    int d,m,y;
    friend istream &operator >> (istream &is,NhanVien &a) {
        is >> ws;
        getline(is,a.name);
        getline(is,a.gender);
        char slash;
        is >> a.m >> slash >> a.d >> slash >> a.y;
        is >> ws;
        getline(is,a.address);
        getline(is,a.tax);
        getline(is,a.date);
        string s=to_string(stt++);
        while(s.length()<5) s="0"+s;
        a.id=s;
        return is;
    }
    friend ostream &operator << (ostream &os,NhanVien a) {
        os << a.id << " " << a.name << " " << a.gender << " ";
        os << setfill('0') << setw(2) << a.m << "/" << setw(2) << a.d << "/" << setw(4) << a.y;
        os << a.born << " " << a.address << " " << a.tax << " " << a.date << "\n";
        return os;
    }
};
bool cmp(NhanVien a,NhanVien b) {
    if(a.y!=b.y) return a.y<b.y;
    if(a.m!=b.m) return a.m<b.m;
    if(a.d!=b.d) return a.d<b.d;
    return a.id<b.id;
}
void sapxep(NhanVien ds[],int N) {
    sort(ds,ds+N,cmp);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    NhanVien ds[50];
    int N; cin >> N;
    for(int i=0;i<N;i++) cin >> ds[i];
    sapxep(ds,N);
    for(int i=0;i<N;i++) cout << ds[i];
    return 0;
}