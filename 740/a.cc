#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bool flag = true;
    int iter = 1;
    int ret = 0;
    while(flag) {
        flag = false;
        for(int i = 0; i < n-1; i+=2) if(a[i] > a[i+1]) swap(a[i], a[i+1]), ret++, iter++, flag = true;
        for(int i = 1; i < n-1; i+=2) if(a[i] > a[i+1]) swap(a[i], a[i+1]), ret++, iter++, flag = true;
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
