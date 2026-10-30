#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int d=s.length();
        for(int i=0;i<s.length();i++) {
            char c=s[i];
            int p=i+1;
            while(s.find(c,p)!=-1) {
                p=s.find(c,p)+1;
                d++;
            }
        }
	    cout << d << "\n";
	}
    return 0;
}