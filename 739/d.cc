#include <bits/stdc++.h>
using namespace std;

int get_dis(string f, string t) {
    int fp = 0;
    int tp = 0;
    int ret = 0;
    while(fp < f.length() && tp < t.length()) {
        if(f[fp] == t[tp]) {
            fp++;
            tp++;
        }    
        else fp++, ret++;
        if(fp == f.length()) return ret+t.length()-tp;
        if(tp == t.length()) return ret+f.length()-fp;
    }
    return ret;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long n;
        cin >> n;
        long long now = 1;
        vector<int> dis;
        for(long long i = 1; i <= 60; i++) {
            string sa = to_string(n);
            string sb = to_string(now);
            //cout << sa << " " << sb << " " << get_dis(sa, sb) << endl;
            dis.push_back(get_dis(sa, sb));
            now *= 2;
        }
        cout << *min_element(dis.begin(), dis.end()) << endl;
    }
    return 0;
}
