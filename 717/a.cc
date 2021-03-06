
/*
 * A. Tit for Tat
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given an array ๐ of length ๐, you can do at most ๐ operations of the following type on it:

choose 2 different elements in the array, add 1 to the first, and subtract 1 from the second. However, all the elements of ๐ have to remain non-negative after this operation.
What is lexicographically the smallest array you can obtain?

An array ๐ฅ is lexicographically smaller than an array ๐ฆ if there exists an index ๐ such that ๐ฅ๐<๐ฆ๐, and ๐ฅ๐=๐ฆ๐ for all 1โค๐<๐. Less formally, at the first index ๐ in which they differ, ๐ฅ๐<๐ฆ๐.

Input
The first line contains an integer ๐ก (1โค๐กโค20) โ the number of test cases you need to solve.

The first line of each test case contains 2 integers ๐ and ๐ (2โค๐โค100, 1โค๐โค10000) โ the number of elements in the array and the maximum number of operations you can make.

The second line contains ๐ space-separated integers ๐1, ๐2, โฆ, ๐๐ (0โค๐๐โค100) โ the elements of the array ๐.

Output
For each test case, print the lexicographically smallest array you can obtain after at most ๐ operations.

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
