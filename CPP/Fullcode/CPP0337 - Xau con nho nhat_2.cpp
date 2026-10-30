/*Optimization: Sliding window
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s; cin >> s;
    int n=s.length();
    bool visited[256]={false};
    int num=0;
    for(int i=0;i<n;i++)
        if(!visited[s[i]]) {
            visited[s[i]]=true;
            num++;
        }
    int hash_str[256]={0};
    int left=0,count=0,min_len=INT_MAX;
    for(int right=0;right<n;right++) {
        hash_str[s[right]]++;
        if(hash_str[s[right]]==1) count++;
        if(count==num) {
            while(hash_str[s[left]]>1) {
                hash_str[s[left]]--;
                left++;
            }
            int windown_len=right-left+1;
            if(min_len>windown_len) min_len=windown_len;
        }
    }
    cout << min_len << "\n";
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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string a; cin >> a;
		int n=a.size(),s=0,b[26]={},c[26]={},mim=1e6,d=0,l=0,r=-1;
	    for(int i=0;i<n;i++) {
	        if(b[a[i]-'a']==0) {
	            b[a[i]-'a']=1;
	            s++;
	        }
	    }
	    for(int i=0;i<n;i++) {
	        c[a[i]-'a']++;
	        if(c[a[i]-'a']==1) d++;
	        if(d==s){
	            while(c[a[l]-'a']>1) {
	                if(c[a[l]-'a']>1) c[a[l]-'a']--;
	                l++;
	            }
	            int lw=i-l+1;
	            if(mim>lw){
	                mim=lw;
	                r=l;
	            }
	        }
	    }
	    cout << mim << "\n";
	}
    return 0;
}