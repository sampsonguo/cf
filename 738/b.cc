#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int lastnum = -1;
        char lastcolor = 'B'; 
        for(int i = 0; i < n; i++) {
            if(lastnum >= 0 && s[i] == '?') {
                if(lastcolor == 'B') s[i] = 'R', lastcolor = 'R';
                else s[i] = 'B', lastcolor = 'B';
            }
            if(s[i] != '?') lastnum = i, lastcolor = s[i];
        }
        lastnum = -1;
        lastcolor = 'B';
        for(int i = n-1; i >=0; i--) {
            if(lastnum >= 0 && s[i] == '?') {
                if(lastcolor == 'B') s[i] = 'R', lastcolor = 'R';
                else s[i] = 'B', lastcolor = 'B';
            }
            if(s[i] != '?') lastnum = i, lastcolor = s[i];
        }
        for(int i = 0; i < n; i++) {
            if(s[i] == '?' && i % 2 == 0) s[i] = 'B';
            if(s[i] == '?' && i % 2 == 1) s[i] = 'R';
        }
        cout << s << endl;
    }
    return 0;
}
