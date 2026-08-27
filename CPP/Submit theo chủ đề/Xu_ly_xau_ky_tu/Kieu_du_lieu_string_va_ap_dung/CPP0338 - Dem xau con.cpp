#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s;
        int k;
        cin >> s >> k;
		int res=0;
        for(int i=0;i<s.length();i++) {
            bool dd[26]={0};
            int d=0;
            for(int j=i;j<s.length();j++) {
                if(dd[s[j]-'a']==0) {
                    dd[s[j]-'a']=1;
                    d++;
                }
                if(d==k) res++;
                else if(d>k) break;
            }
        }
	    cout << res << "\n";
	}
    return 0;
}