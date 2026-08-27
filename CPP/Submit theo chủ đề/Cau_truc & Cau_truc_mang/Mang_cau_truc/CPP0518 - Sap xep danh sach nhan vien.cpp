#include <bits/stdc++.h>
using namespace std;
int stt=1;
struct NhanVien {
    string id,name,gender,address,tax,date;
    int d,m,y;
};
string STT(int i) {
    string s=to_string(i);
    while(s.length()<5) s='0'+s;
    return s;
}
bool cmp(NhanVien a,NhanVien b) {
    if(a.y!=b.y) return a.y<b.y;
    if(a.m!=b.m) return a.m<b.m;
    if(a.d!=b.d) return a.d<b.d;
    return a.id<b.id;
}
void nhap(NhanVien &a) {
    a.id=STT(stt);
    stt++;
    cin >> ws;
    getline(cin,a.name);
    getline(cin,a.gender);
    char slash;
    cin >> a.d >> slash >> a.m >> slash >> a.y;    cin >> ws;
    getline(cin,a.address);
    getline(cin,a.tax);
    getline(cin,a.date);
}
void sapxep(NhanVien ds[],int N) {
    sort(ds,ds+N,cmp);
}
void inds(NhanVien ds[],int N) {
    for(int i=0;i<N;i++) {
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].gender << " ";
        cout << setfill('0') << setw(2) << ds[i].d << "/" << setw(2) << ds[i].m << "/" << setw(4) << ds[i].y << " ";
        cout << ds[i].address << " " << ds[i].tax << " " << ds[i].date << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    struct NhanVien ds[50];
    int N; cin >> N;
    for(int i=0;i<N;i++) nhap(ds[i]);
    sapxep(ds,N);
    inds(ds,N);
    return 0;
}