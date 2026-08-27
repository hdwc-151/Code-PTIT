#include <bits/stdc++.h>
using namespace std;
string sum_string(const string &a,const string &b) {
    string str1=a,str2=b;
    if(str1.length()<str2.length()) swap(str1,str2);
    string res="";
    res.reserve(str1.length()+2);
    int carry=0;
    int n1=str1.length(),n2=str2.length();
    for(int i=0;i<n1;i++) {
        int sum=(str1[n1-1-i]-'0')+carry;
        if(i<n2) sum+=(str2[n2-1-i]-'0');
        res.push_back(sum%10+'0');
        carry=sum/10;
    }
    if(carry) res.push_back(carry+'0');
    reverse(res.begin(),res.end());
    return res;
}
bool check(const string &str,int len1,int len2) {
    int beg=0,l1=len1,l2=len2,n=str.length();
    while(beg+l1+l2<n) {
        string s1=str.substr(beg,l1),s2=str.substr(beg+l1,l2),s3=sum_string(s1,s2);
        int l3=s3.length();
        if(beg+l1+l2+l3>n) return false;
        if(str.compare(beg+l1+l2,l3,s3)!=0) return false;
        beg+=l1;
        l1=l2;
        l2=l3;
    }
    return true;
}
bool is_sum_str(const string &str) {
    int n=str.length();
    for(int i=1;i<=n/2;i++) for(int j=1;i+j+max(i,j)<=n;j++) if(check(str,i,j)) return true;
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        is_sum_str(s)?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}