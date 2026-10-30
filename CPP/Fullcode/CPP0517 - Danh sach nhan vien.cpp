#include <bits/stdc++.h>
using namespace std;
struct NhanVien {
    string id,name,gender,born,address,tax,date;
};
string STT(int i) {
    string s=to_string(i);
    while(s.length()<5) s='0'+s;
    return s;
}
void nhap(NhanVien &a) {
    cin >> ws;
    getline(cin,a.name);
    getline(cin,a.gender);
    getline(cin,a.born);
    getline(cin,a.address);
    getline(cin,a.tax);
    getline(cin,a.date);
}
void inds(NhanVien ds[],int N) {
    for(int i=0;i<N;i++) {
        cout << STT(i+1) << " ";
        cout << ds[i].name << " " << ds[i].gender << " " << ds[i].born << " " << ds[i].address << " " << ds[i].tax << " " << ds[i].date << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    struct NhanVien ds[50];
    int N; cin >> N;
    for(int i=0;i<N;i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}