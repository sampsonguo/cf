#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    map<char, int> freq;
    string ord;
    for(char c: s) {
        if(!freq[c]) ord += c;
        else freq[c]++;
    }
    for(map<char, int>::iterator it = freq.begin(); it != freq.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}
