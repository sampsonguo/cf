#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a, b, c;
        cin >> a >> b >> c;
        int aa = max(a, b);
        int bb = min(a, b);
        //cout << ".. " << aa << " " << bb << endl;
        int mid = aa-bb+1;
        if( mid > bb && mid <= aa && c <= mid*2-2) {
        //cout << ".. " << aa << " " << bb << endl;
            if( mid > c ) cout << mid+c-1 << endl;
            else cout << c-mid+1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
