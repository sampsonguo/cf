#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<int> v;
    for(int i = 1; v.size() <= 1005; i++) {
        if(i % 3 != 0 && i % 10 != 3) v.push_back(i);
    }
    while(T--) {
        int k;
        cin >> k;
        cout << v[k-1] << endl;
    }
    return 0;
}
