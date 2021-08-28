#include <bits/stdc++.h>
using namespace std;

int get_father(vector<int>& v, int x) {
    if(v[x] != x) {
        v[x] = get_father(v, v[x]); 
        return v[x];
    }
    else return x;
}

int main() {
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    vector<int> p1(n), p2(n);
    for(int i = 0; i < n; i++) p1[i] = i;
    for(int i = 0; i < n; i++) p2[i] = i;
    vector< pair<int, int>> vp1, vp2;
    int a, b;
    for(int i = 0; i < m1; i++) {
        scanf("%d %d", &a, &b);
        a--;
        b--;
        if(get_father(p1, a) != get_father(p1, b)) p1[get_father(p1, a)] = get_father(p1, b);
    }
    for(int i = 0; i < m2; i++) {
        scanf("%d %d", &a, &b);
        a--;
        b--;
        if(get_father(p2, a) != get_father(p2, b)) p2[get_father(p2, a)] = get_father(p2, b);
    }
    //cout << " here " << endl;
    vector<pair<int, int>> ret;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            //cout << i << " " << j << " " << p1[i] << " " << p1[j] << endl;
            if(get_father(p1, i) != get_father(p1, j) &&
                    get_father(p2, i) != get_father(p2, j)) {
                p1[get_father(p1, i)] = get_father(p1, j);
                p2[get_father(p2, i)] = get_father(p2, j);
                //for(int i = 0; i < p1.size(); i++) cout << get_father(p1, i) << " ";
                ret.push_back(make_pair(i+1, j+1));
            }
        }
    }
    cout << ret.size() << endl;
    for(int i = 0; i < ret.size(); i++) {
        cout << ret[i].first << " " << ret[i].second << endl;
    }
    return 0;
}
