#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		for(int i=0;i<s.length();i++) {
            int j=i;
            while(s[j]==s[i]&&j<s.length()) j++;
            cout << s[i] << j-i;
            i=j-1;
        }
	    cout << "\n";
	}
    return 0;
}