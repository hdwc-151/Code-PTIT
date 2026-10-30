#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv,name,classs;
    int d,m,y;
    float gpa;
};
string solve(int i) {
    string s=to_string(i);
    while(s.length()<3) s='0'+s;
    return "B20DCCN"+s;
}
void chuanhoa(string &str) {
    string s,res="";
    stringstream ss(str);
    while(ss>>s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s[0]=toupper(s[0]);
        res+=s+' ';
    }
    res.pop_back();
    str=res;
}
bool cmp(SinhVien a,SinhVien b) {
    return a.gpa>b.gpa;
}
void nhap(SinhVien ds[],int N) {
    for(int i=0;i<N;i++) {
        ds[i].msv=solve(i+1);
        cin.ignore();
        getline(cin,ds[i].name);
        chuanhoa(ds[i].name);
        getline(cin,ds[i].classs);
        char slash;
        cin >> ds[i].d >> slash >> ds[i].m >> slash >> ds[i].y >> ds[i].gpa;
    }
}
void sapxep(SinhVien ds[],int N) {
    sort(ds,ds+N,cmp);
}
void in(SinhVien ds[],int N) {
    for(int i=0;i<N;i++) {
        cout << ds[i].msv << " " << ds[i].name << " " << ds[i].classs << " ";
        cout << setfill('0') << setw(2) << ds[i].d << "/" << setw(2) << ds[i].m << "/" << setw(4) << ds[i].y << " " << fixed << setprecision(2) << ds[i].gpa << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    struct SinhVien ds[50];
    int N; cin >> N;
    nhap(ds,N);
    sapxep(ds,N);
    in(ds,N);
    return 0;
}