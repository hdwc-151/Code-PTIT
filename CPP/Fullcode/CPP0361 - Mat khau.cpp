/* Naive
#include <bits/stdc++.h>
using namespace std;
bool cmp(string a,string b) {
    return a.length()>b.length();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<string> a(n);
    for(auto &x:a) cin >> x;
    sort(a.begin(),a.end(),cmp);
    long long ans=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                ans+=2;
                continue;
            }
            if(a[i].find(a[j])!=string::npos) ans++;
        }
    cout << ans << "\n";
    return 0;
}
*/

//Mảng tần suất
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<string> a(n);
    unordered_map<string,int> frequency;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        frequency[a[i]]++;
    }
    long long ans=0;
    for(int i=0;i<n;i++) {
        string s=a[i];
        int len=s.length();
        vector<string> subs;
        for(int start=0;start<len;start++) for(int l=1;l<=len-start;l++) subs.push_back(s.substr(start,l));
        sort(subs.begin(),subs.end());
        subs.erase(unique(subs.begin(),subs.end()),subs.end());
        for(const string &sub:subs) if(frequency.count(sub)) ans+=frequency[sub];
        ans--;
    }
    cout << ans << "\n";
}