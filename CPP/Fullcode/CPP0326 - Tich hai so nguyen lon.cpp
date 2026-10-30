#include <bits/stdc++.h>
using namespace std;
string multi(string num1,string num2) {
    if(num1=="0"||num2=="0") return "0";
    int n=num1.length(),m=num2.length();
    vector<int> res(n+m,0);
    for(int i=n-1;i>=0;i--)
        for(int j=m-1;j>=0;j--) {
            int mul=(num1[i]-'0')*(num2[j]-'0');
            int sum=mul+res[i+j+1];
            res[i+j+1]=sum%10;
            res[i+j]+=sum/10;
        }
        string result="";
        for(int digit:res) if(!(result.empty()&&digit==0)) result.push_back(digit+'0');
        return result;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string a,b; cin >> a >> b;
        cout << multi(a,b) << "\n";
    }
}