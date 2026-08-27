#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
        vector<char> v;
        int sum=0;
        for(int i=0;i<s.length();i++) {
            if(isalpha(s[i])) v.push_back(s[i]);
            else sum+=s[i]-'0';
        }
        sort(v.begin(),v.end());
        for(auto x:v) cout << x;
	    cout << sum << "\n";
	}
    return 0;
}