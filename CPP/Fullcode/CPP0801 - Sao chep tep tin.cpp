#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a;
    ifstream input("PTIT.in");
    ofstream output("PTIT.out");
    while (getline(input, a)) output << a << '\n';
    input.close();
    output.close();
    return 0;
}