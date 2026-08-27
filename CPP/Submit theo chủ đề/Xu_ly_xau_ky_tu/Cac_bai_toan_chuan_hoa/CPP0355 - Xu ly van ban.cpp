/* Ngắn gọn dễ hiểu
#include <bits/stdc++.h>
using namespace std;
bool check(string s) {
    char c=s.back();
    return(c=='.'||c=='?'||c=='!');
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	vector<string> v;
    string s;
    while(cin >> s) v.push_back(s);
    bool caps=1;
    for(auto x:v) {
        transform(x.begin(),x.end(),x.begin(),::tolower);
        if(caps) {
            x[0]=toupper(x[0]);
            caps=0;
        }
        if(check(x)) {
            x.pop_back();
            cout << x << "\n";
            caps=1;
        }
        else {
            cout << x << " ";
        }
    }
    return 0;
}
*/

//Dài dòng văn tự -> Dễ lỗi vòng 
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	string s;
    vector<string> sentences;
    while(cin >> s) {
        string word="";
        for(char ch:s) {
            if(ch=='.'||ch=='?'||ch=='!') {
                if(!word.empty()) {
                    sentences.push_back(word);
                    word="";
                }
                if(!sentences.empty()) {
                    sentences[0][0]=toupper(sentences[0][0]);
                    for(int i=0;i<sentences.size();i++) {
                        cout << sentences[i];
                        if(i<sentences.size()-1) cout << " ";
                    }
                    cout << "\n";
                    sentences.clear();
                }
            }
            else word+=tolower(ch);
        }
        if(!word.empty()) sentences.push_back(word);
    }
    if(!sentences.empty()) {
        sentences[0][0]=toupper(sentences[0][0]);
        for(int i=0;i<sentences.size();i++) {
            cout << sentences[i];
            if(i<sentences.size()-1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}