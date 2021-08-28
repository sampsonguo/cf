#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int k;
        cin >> k;
        int sq = sqrt(k);
        int other = k - sq*sq;
        if(other == 0) sq--, other = k - sq*sq;
        //cout << other << " " << sq << endl;
        int r, c;
        if(other <= sq+1) {
            c = sq+1;
            r = other;
        } else {
            c = 2*sq+2-other;
            r = sq+1;
        }
        cout << r << " " << c << endl;
    }
    return 0;
}
