#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
    cin.ignore();
	while(t--){
		string str,s;
        getline(cin,str);
        stringstream ss(str);
        vector<int> even,odd;
        while(ss>>s) {
            int x=stoi(s);
            (x%2==0)?even.push_back(x):odd.push_back(x);
        }
        if((even.size()+odd.size())%2==0&&even.size()>odd.size()) cout << "YES\n";
        else if((even.size()+odd.size())%2==1&&odd.size()>even.size()) cout << "YES\n";
        else cout << "NO\n";
	}
    return 0;
}