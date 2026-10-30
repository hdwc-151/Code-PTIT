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
void nhap(SinhVien ds[],int N) {
    for(int i=0;i<N;i++) {
        //scanf("\n");
        ds[i].msv=solve(i+1);
        cin.ignore();
        getline(cin,ds[i].name);
        getline(cin,ds[i].classs);
        //scanf("%d/%d/%d %f",&ds[i].d,&ds[i].m,&ds[i].y,&ds[i].gpa);
        char slash;
        cin >> ds[i].d >> slash >> ds[i].m >> slash >> ds[i].y >> ds[i].gpa;
    }
}
void in(SinhVien ds[],int N) {
    for(int i=0;i<N;i++) {
        cout << ds[i].msv << " " << ds[i].name << " " << ds[i].classs << " ";
        //printf(" %.2d/%.2d/%.4d %.2f\n",ds[i].d,ds[i].m,ds[i].y,ds[i].gpa);
        cout << setfill('0') << setw(2) << ds[i].d << "/" << setw(2) << ds[i].m << "/" << setw(4) << ds[i].y << " " << fixed << setprecision(2) << ds[i].gpa << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    struct SinhVien ds[50];
    int N; cin >> N;
    nhap(ds,N);
    in(ds,N);
    return 0;
}