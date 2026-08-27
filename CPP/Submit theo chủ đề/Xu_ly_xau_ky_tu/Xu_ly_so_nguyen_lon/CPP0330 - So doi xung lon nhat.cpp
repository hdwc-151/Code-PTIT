/* Chưa hiểu sao WA
#include <bits/stdc++.h>
using namespace std;
bool cmp(const string &a,const string &b) {
    if(a.length()!=b.length()) return a.length()>b.length();
    return a>b;
}
void solve() {
    string s; cin >> s;
    vector<int> count(10,0);
    for(char c:s) count[c-'0']++;
    vector<int> odd_digit;
    for(int i=0;i<=9;i++) if(count[i]%2!=0) odd_digit.push_back(i);
    odd_digit.push_back(-1);
    string best_palindrome="";
    for(int center_digit:odd_digit) {
        vector<int> kept(10,0);
        for(int d=0;d<=9;d++) {
            if(count[d]==0) continue;
            if(count[d]%2==0||d==center_digit) kept[d]=count[d];
        }
        if(kept[0]>=2) {
            bool has_non_zero_pair=false;
            for(int d=1;d<=9;d++) {
                if(kept[d]>=2) {
                    has_non_zero_pair=true;
                    break;
                }
            }
            if(!has_non_zero_pair) kept[0]=0;
        }
        string left_half="";
        for(int d=9;d>=0;d--) if(kept[d]>=2) left_half.append(kept[d]/2,(char)(d+'0'));
        string center="";
        if(center_digit!=-1&&kept[center_digit]>0) if(kept[center_digit]%2!=0) center+=(char)(center_digit+'0');
        string right_half=left_half;
        reverse(right_half.begin(),right_half.end());
        string candidate=left_half+center+right_half;
        if(candidate!="") if(best_palindrome==""||cmp(candidate,best_palindrome)) best_palindrome=candidate;
    }
    if(best_palindrome=="") best_palindrome="0";
    cout << best_palindrome << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
*/

/* Updating
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        vector<int> count(20,0);
        for(char c:s) count[c-'0']++;
        vector<int> odd_digit;
        for(int i=0;i<=9;i++) if(count[i]%2!=0) odd_digit.push_back(i);
        odd_digit.push_back(-1);
        string best_palindrome="";
        for(int center_digit:odd_digit) {
            vector<int> kept(10,0);
            for(int d=0;d<=9;d++) {
                if(count[d]==0) continue;
                if(count[d]%2==0||d==center_digit) kept[d]=count[d];
            }
            bool has_non_zero_pair=false;
            for(int d=1;d<=9;d++) {
                if(kept[d]>=2) {
                    has_non_zero_pair=true;
                    break;
                }
            }
            if(!has_non_zero_pair) kept[0]=0;
            string left_half="";
            for(int d=9;d>=0;d--) if(kept[d]>=2) left_half.append(kept[d]/2,(char)(d+'0'));
            string center="";
            if(center_digit!=-1&&kept[center_digit]>0) center+=(char)(center_digit+'0');
            string right_half=left_half;
            reverse(right_half.begin(),right_half.end());
            string candidate=left_half+center+right_half;
            if(candidate!="") {
                if(best_palindrome=="") best_palindrome=candidate;
                else {
                    if(candidate.length()>best_palindrome.length()) best_palindrome=candidate;
                    else if(candidate.length()==best_palindrome.length()&&candidate>best_palindrome) best_palindrome=candidate;
                }
            }
        }
        if(best_palindrome=="") best_palindrome="0";
        cout << best_palindrome << "\n";
    }
    return 0;
}
*/

/* Tối ưu
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s; if(!(cin >> s)) return;
    int cnt[10]={0};
    for(char c:s) cnt[c-'0']++;
    string best_pal="";
    for(int center=-1;center<=9;center++) {
        if(center!=-1&&cnt[center]%2==0) continue;
        int kept[10]={0};
        bool has_non_zero_pair=false;
        for(int d=0;d<=9;d++) {
            if(cnt[d]==0) continue;
            if(cnt[d]%2==0||d==center) {
                kept[d]=cnt[d];
                if(kept[d]>=2&&d>0) has_non_zero_pair=true;
            }
        }
        if(cnt[0]%2==0||center==0) {
            if(has_non_zero_pair) kept[0]=cnt[0];
            else if(center==0&&cnt[0]>0) kept[0]=1;
            else kept[0]=0;
        }
        string half="";
        for(int d=9;d>=0;d--) if(kept[d]>=2) half.append(kept[d]/2,d+'0');
        string candidate=half;
        if(center!=-1&&kept[center]>0) candidate+=(char)(center+'0');
        candidate.append(half.rbegin(),half.rend());
        if(candidate.length()>best_pal.length()) best_pal=candidate;
        else if(candidate.length()==best_pal.length()&&candidate>best_pal) best_pal=candidate;
    }
    if(best_pal.empty()) best_pal="0";
    cout << best_pal << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    if(cin>>t) {
        while(t--) solve();
    }
    return 0;
}
*/

//Solution pair
#include <bits/stdc++.h>
using namespace std;
bool cmp1(pair<int,int> a,pair<int,int>  b) {
    if(a.second==b.second) return a.first>b.first;
    return a.second>b.second;
}
bool cmp2(pair<int,int> a, pair<int,int> b) {
    return a.first>b.first;
}
void solve() {
    string s;
    if(!(cin >> s)) return;
    int cnt[10]={0};
    for(char c:s) cnt[c-'0']++;
    vector<pair<int,int>> a1,a2;
    for(int i=0;i<10;i++) {
        if(cnt[i]%2==1) a1.push_back({i,cnt[i]});
        else if(cnt[i]>0) a2.push_back({i,cnt[i]});
    }
    sort(a1.begin(),a1.end(),cmp1);
    sort(a2.begin(),a2.end(),cmp2);
    bool has_non_zero_even=(a2.size()>0&&a2[0].first!=0);
    if(has_non_zero_even) {
        for(auto val:a2) for(int j=0;j<val.second/2;j++) cout << val.first;
        if(a1.size()>0) for(int i=0;i<a1[0].second;i++) cout << a1[0].first;
        for(int i=a2.size()-1;i>=0;i--) for(int j=0;j<a2[i].second/2;j++) cout << a2[i].first;
    }
    else {
        bool check=false;
        for(auto val:a1)
            if(val.first!=0) {
                for(int i=0;i<val.second;i++) cout << val.first;
                check=true;
                break;
        }
        if(!check) cout << 0;
    }
    cout << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    if(cin>>t) {
        while(t--) solve();
    }
    return 0;
}