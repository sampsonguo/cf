#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        if(b == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << a*(2*b-1) << " " << a << " " << a*b*2 << endl;
        }
    }
    return 0;
}
