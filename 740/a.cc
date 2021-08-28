#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& a) {
    for(int i = 0; i < a.size()-1; i++) if(a[i] > a[i+1]) return false;
    return true;
}

void print(vector<int>& a) {
    for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bool flag = true;
    int ret = 0;
    while(flag) {
        flag = false;
        bool add1 = false;
        bool add2 = false;

        if(check(a)) break;
        for(int i = 0; i < n-1; i+=2) if(a[i] > a[i+1]) swap(a[i], a[i+1]), add1 = true, flag = true;
        ret++;
        //print(a);

        if(check(a)) break;
        for(int i = 1; i < n-1; i+=2) if(a[i] > a[i+1]) swap(a[i], a[i+1]), add2 = true, flag = true;
        ret++;
        //print(a);
    }
    cout << ret << endl;
    return ;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}
