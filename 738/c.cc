#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int lastpos = -1;
        for(int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
            if(v[i] == 0) lastpos = i;
        }
        vector<int> ret;
        for(int i = 0; i <= lastpos; i++) {
            ret.push_back(i);
        }
        ret.push_back(n);
        for(int i = lastpos+1; i < n; i++) {
            ret.push_back(i);
        }
        for(int i = 0; i < ret.size(); i++) {
            cout << ret[i]+1 << " ";
        }
        cout << endl;
    }
    return 0;
}
