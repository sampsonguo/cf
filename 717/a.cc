
/*
 * A. Tit for Tat
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given an array 𝑎 of length 𝑛, you can do at most 𝑘 operations of the following type on it:

choose 2 different elements in the array, add 1 to the first, and subtract 1 from the second. However, all the elements of 𝑎 have to remain non-negative after this operation.
What is lexicographically the smallest array you can obtain?

An array 𝑥 is lexicographically smaller than an array 𝑦 if there exists an index 𝑖 such that 𝑥𝑖<𝑦𝑖, and 𝑥𝑗=𝑦𝑗 for all 1≤𝑗<𝑖. Less formally, at the first index 𝑖 in which they differ, 𝑥𝑖<𝑦𝑖.

Input
The first line contains an integer 𝑡 (1≤𝑡≤20) – the number of test cases you need to solve.

The first line of each test case contains 2 integers 𝑛 and 𝑘 (2≤𝑛≤100, 1≤𝑘≤10000) — the number of elements in the array and the maximum number of operations you can make.

The second line contains 𝑛 space-separated integers 𝑎1, 𝑎2, …, 𝑎𝑛 (0≤𝑎𝑖≤100) — the elements of the array 𝑎.

Output
For each test case, print the lexicographically smallest array you can obtain after at most 𝑘 operations.

2
3 1
3 1 4
2 10
1 0

2 1 5
0 1
*/

#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, k, tmp, k_cur;
        vector<int> ret;
        scanf("%d%d", &n, &k);
        k_cur = k;
        for(int i = 0; i < n; i++) {
            scanf("%d", &tmp);
            if(k_cur > 0 && i != n-1) {
                int diff = min(k_cur, tmp);
                k_cur -= diff;
                tmp -= diff;
                ret.push_back(tmp); 
            } else if(i == n-1) {
                ret.push_back(tmp+k-k_cur);
            } else {
                ret.push_back(tmp);
            }
        }
        for(int i = 0; i < ret.size(); i++) {
            if(i == 0) cout << ret[i];
            else cout << " " << ret[i];
        }
        cout <<endl;
    }
    return 0;
}
