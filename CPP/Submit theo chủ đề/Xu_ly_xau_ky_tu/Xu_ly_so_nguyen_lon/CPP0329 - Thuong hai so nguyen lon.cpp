#include <bits/stdc++.h>
using namespace std;
bool cmp(const string &a,const string &b) {
    if(a.length()!=b.length()) return a.length()>b.length();
    return a>=b;
}
string add(string a,string b) {
    string res="";
    int carry=0,i=a.length()-1,j=b.length()-1;
    while(i>=0||j>=0||carry) {
        int sum=carry;
        if(i>=0) sum+=a[i--]-'0';
        if(j>=0) sum+=b[j--]-'0';
        res.push_back(sum%10+'0');
        carry=sum/10;
    }
    reverse(res.begin(),res.end());
    return res;
}
void sub(string &a,string &b) {
    int carry=0,i=a.length()-1,j=b.length()-1;
    for(i,j;i>=0;i--,j--) {
        int diff=(a[i]-'0')-carry-(j>=0?b[j]-'0':0);
        if(diff<0) {
            diff+=10;
            carry=1;
        }
        else carry=0;
        a[i]=diff+'0';
    }
    int pos=0;
    while(pos<a.length()-1&&a[pos]=='0') pos++;
    a.erase(0,pos);
}
string divide(string x,string y) {
    if(x=="0"||y=="0") return "0";
    if(!cmp(x,y)) return "0";
    string y_multi[10];
    y_multi[0]="0",y_multi[1]=y;
    for(int i=2;i<=9;i++) y_multi[i]=add(y_multi[i-1],y);
    string res="";
    string cur="";
    for(int i=0;i<x.length();i++) {
        cur.push_back(x[i]);
        if(cur.length()>1&&cur[0]=='0') cur.erase(0,1);
        int k=9;
        while(k>0&&!cmp(cur,y_multi[k])) k--;
        res.push_back(k+'0');
        if(k>0) sub(cur,y_multi[k]);
    }
    int pos=0;
    while(pos<res.length()-1&&res[pos]=='0') pos++;
    return res.substr(pos);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string x, y;
        cin >> x >> y;
        cout << divide(x, y) << "\n";
    }
    return 0;
}