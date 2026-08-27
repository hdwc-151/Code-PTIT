/*Optimization: Sliding window
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s,t; cin >> s >> t;
    int len_s=s.length(),len_t=t.length();
    if(len_s<len_t) {
        cout << -1 << "\n";
        return;
    }
    int hash_pat[256]={0},hash_str[256]={0};
    for(int i=0;i<len_t;i++) hash_pat[t[i]]++;
    int left=0,start_index=-1,min_len=INT_MAX,count=0;
    for(int right=0;right<len_s;right++) {
        hash_str[s[right]]++;
        if(hash_str[s[right]]<=hash_pat[s[right]]) count++;
        if(count==len_t) {
            while(hash_str[s[left]]>hash_pat[s[left]]||hash_pat[s[left]]==0){
                if(hash_str[s[left]]>hash_pat[s[left]]) hash_str[s[left]]--;
                left++;
            }
            int window_len=right-left+1;
            if(min_len>window_len) {
                min_len=window_len;
                start_index=left;
            }
        }
    }
    (start_index==-1)?cout<<-1<<"\n":cout<<s.substr(start_index,min_len)<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string a,b; cin >> a >> b;
		int c[26]={},n=a.size(),s=1e6,l,r;
		for(int i=0;i<b.size();i++) c[b[i]-'a']++;
		for(int i=0;i<n;i++) {
			int d[26]={};
			for(int j=i;j<n;j++) {
				d[a[j]-'a']++;
				int ok=0;
				for(int k=0;k<26;k++) {
					if(d[k]<c[k]) {
						ok=1;
						break;
					}
				}
				if(ok==0&&s>j-i+1) {
					s=j-i+1;
					l=i;r=j;
				}
			}
		}
		if(s==1e6) cout << -1 << "\n";
		else {
			for(int i=l;i<=r;i++) cout << a[i];
			cout << "\n";
		}
	}
    return 0;
}