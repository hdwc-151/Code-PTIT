/* 
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int m,s; cin >> m >> s;
    if(s==0){
        (m==1)?cout<<"0 0\n":cout<<"-1 -1\n";
        return;
    }
    if(s>9*m) {
        cout << "-1 -1\n";
        return;
    }
    string min_str(m,'0');
    int temp=s-1;
    for(int i=m-1;i>0;i--) {
        if(temp>=9) {
            min_str[i]='9';
            temp-=9;
        }
        else {
            min_str[i]=temp+'0';
            temp=0;
        }
    }
    min_str[0]=temp+1+'0';
    string max_str(m,'0');
    temp=s;
    for(int i=0;i<m;i++) {
        if(temp>=9) {
            max_str[i]='9';
            temp-=9;
        }
        else {
            max_str[i]=temp+'0';
            temp=0;
        }
    }
    cout << min_str << " " << max_str << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
string min_str(int m,int s) {
    string r(m,'0');
    r[0]='1',s-=1;
    for(int i=m-1;i>=0;i--) {
        int d=r[i]-'0';
        if(s>9-d) {
            r[i]='9';
            s-=9-d;
        }
        else {
            r[i]+=s;
            break;
        }
    }
    return r;
}
string max_str(int m,int s) {
    string r(m,'0');
    for(int i=0;i<m;i++) {
        int d=r[i]-'0';
        if(s>9-d) {
            r[i]='9';
            s-=9-d;
        }
        else {
            r[i]+=s;
            break;
        }
    }
    return r;
}
void solve() {
    int m,s; cin >> m >> s;
    (s<=0||s>9*m)?cout<<"-1 -1\n":cout<<min_str(m,s)<<" "<< max_str(m,s)<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}