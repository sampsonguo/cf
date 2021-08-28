#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int now = v[0];
        for(int i = 1; i < n; i++) {
            now &= v[i];
        }
        cout << now << endl;
    }
    return 0;
}

