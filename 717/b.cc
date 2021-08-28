/*
 *
B. AGAGA XOOORRR
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Baby Ehab is known for his love for a certain operation. He has an array 𝑎 of length 𝑛, and he decided to keep doing the following operation on it:

he picks 2 adjacent elements; he then removes them and places a single integer in their place: their bitwise XOR. Note that the length of the array decreases by one.
Now he asks you if he can make all elements of the array equal. Since babies like to make your life harder, he requires that you leave at least 2 elements remaining.

Input
The first line contains an integer 𝑡 (1≤𝑡≤15) — the number of test cases you need to solve.

The first line of each test case contains an integers 𝑛 (2≤𝑛≤2000) — the number of elements in the array 𝑎.

The second line contains 𝑛 space-separated integers 𝑎1, 𝑎2, …, 𝑎𝑛 (0≤𝑎𝑖<230) — the elements of the array 𝑎.

Output
If Baby Ehab can make all elements equal while leaving at least 2 elements standing, print "YES". Otherwise, print "NO".

Example
inputCopy
2
3
0 2 2
4
2 3 1 10
outputCopy
YES
NO
Note
In the first sample, he can remove the first 2 elements, 0 and 2, and replace them by 0⊕2=2. The array will be [2,2], so all the elements are equal.

In the second sample, there's no way to make all the elements equal.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int xxor = 0;
        for(int i = 0; i < n; i++) cin >> v[i], xxor ^= v[i]; 
        if(xxor == 0) { cout << "YES" << endl; continue; }
        int cur = 0, cnt = 0;
        for(int i = 0; i < n; i++) {
            cur ^= v[i];
            if (cur == xxor)  cur = 0, cnt++;
        }
        //cout << ".. " << cnt << endl;
        if(cnt >= 3 && cur == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
