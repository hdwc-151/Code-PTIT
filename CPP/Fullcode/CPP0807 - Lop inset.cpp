#include <bits/stdc++.h>
using namespace std;
class IntSet {
private:
    set<int> data;

public:
    void insert(int x) {
        data.insert(x);
    }
    IntSet intersection(const IntSet &other) const {
        IntSet result;
        for(int x:data) if(other.data.count(x)) result.insert(x);
        return result;
    }
    void print() const {
        for(int x:data) cout << x << " ";
        cout << "\n";
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream file("DATA.in");
    if(!file.is_open()) return 0;
    int n,m;
    file >> n >> m;
    IntSet s1,s2;
    int x;
    for(int i=0;i<n;i++) {
        file >> x;
        s1.insert(x);
    }
    for(int i=0;i<m;i++) {
        file >> x;
        s2.insert(x);
    }
    IntSet s3=s1.intersection(s2);
    s3.print();
    file.close();
    return 0;
}