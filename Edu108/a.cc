#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int r, b, d;
        cin >> r >> b >> d;
        if(1.0 * abs(r - b) / min(r, b) <= d) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
