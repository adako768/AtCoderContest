#include <bits/stdc++.h>
using namespace std;

void fill (vector<vector<bool>> &v1, vector<vector<bool>> &v2, int n, int i, int j) {
    if (
        (i < 0 || j < 0 || i > n-1 || j > n-1 ) // 範囲外
        || !v1[i][j] // 海
        ||  v2[i][j] // 既出
    ) return;


    v2[i][j] = true;
    fill (v1, v2, n, i,   j-1);
    fill (v1, v2, n, i+1, j  );
    fill (v1, v2, n, i-1, j  );
    fill (v1, v2, n, i,   j+1);
    
    return;
}

bool chk (vector<vector<bool>> &v, int n) {
    vector <vector<bool>> Cnct (n,vector<bool>(n,false));
    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (v[i][j]) {
                fill(v, Cnct, n, i, j);
                cnt ++;
                break;
            }
        }
        if (cnt > 0) break;
    }
    bool ok = true;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (v[i][j] && !Cnct[i][j]) ok = false;
        }
    } 
    return ok;
}

int main() {
    const int n = 10;
    vector <vector<bool>> Map(n,vector<bool>(n,false));
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        for (int j=0; j<n; j++) {
            Map[i][j] = (s[j] == 'o');
        }
    }


    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (Map[i][j]) continue;

            Map[i][j] = true;
            if (chk(Map, n)){
                cout << "YES" << endl;
                return 0;
            }
            Map[i][j] = false;
        }
     }
    cout << "NO" << endl;
    return 0;
}
